/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 23:15:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/11/23 16:59:38 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_counting(void)
{
	int len;

	if (VAL == 0 && (!(FLAG & FLAG_ZERO) || FLAG & FLAG_LEFT))
		len = 1;
	else
		len = ft_nbrlen(VAL, BASE);
	PREC -= len;
	if (PREC < 0)
		PREC = 0;
	PAD -= (len + ft_strlen(PREF) + PREC);
	if (PAD <= 0 && PREC > 0 && *PREF && FLAG & FLAG_ZERO)
		PREC -= ft_strlen(PREF);
	else if (PAD < 0)
		PAD = 0;
	if (PREC < 0)
		PREC = 0;
}

void	ft_ucounting(void)
{
	int len;

	if (FLAG & FLAG_P && UVAL == 0)
	{
		len = 1;
	}
	else
		len = ft_nbrlen(UVAL, BASE);
	if ((FLAG & FLAG_P && FLAG & FLAG_PREC)
			|| (FLAG & FLAG_XMX && FLAG & FLAG_PREC))
		PREC -= len;
	else
	{
		PREC -= (len + ft_strlen(PREF));
	}
	if (PREC < 0)
		PREC = 0;
	PAD -= (len + ft_strlen(PREF) + PREC);
	if (PAD < 0)
		PAD = 0;
}

void	ft_ptrsformat_fi(unsigned long flag, va_list argument)
{
	FLAG |= flag;
	ft_fin_conv();
	ft_get_value(argument);
	ft_flagg();
	ft_counting();
	ft_printing_val();
}

void	ft_ptrsformat_fu(unsigned long flag, va_list argument)
{
	FLAG |= flag;
	ft_fin_conv();
	ft_get_uvalue(argument);
	ft_ucounting();
	ft_printing_uval();
}

void	ft_ptrsformat_fmu(unsigned long flag, va_list argument)
{
	FLAG |= flag;
	ft_fin_conv();
	ft_get_uvalue(argument);
	ft_ucounting();
	ft_printing_uvalmaj();
}
