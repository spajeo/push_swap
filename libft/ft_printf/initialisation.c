/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 20:48:21 by spajeo            #+#    #+#             */
/*   Updated: 2017/11/23 16:58:50 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_empty_buff(void)
{
	write(1, BUFF, B_LEN);
	g_total += B_LEN;
	*BUFF = 0;
	B_LEN = 0;
}

static void		ft_get_null_flag(void)
{
	FLAG &= ~FLAG_ZERO;
	FLAG &= ~FLAG_SPACE;
	if ((FLAG & FLAG_OMO && ((FLAG & FLAG_PREC) && !(FLAG & FLAG_PREF)))
		|| (FLAG & FLAG_MX && (FLAG & FLAG_PREC || !(FLAG & FLAG_PREF)))
		|| (FLAG & FLAG_X && FLAG & FLAG_PREC)
		|| (FLAG & FLAG_UMU && FLAG & FLAG_PREC)
		|| (FLAG & FLAG_P && PREC == 0))
		FLAG |= FLAG_NULL;
	if (!(FLAG & FLAG_P))
	{
		ft_bzero(PREF, 4);
		FLAG &= ~FLAG_PREF;
	}
}

void			ft_get_uvalue(va_list argument)
{
	if (FLAG & FLAG_LL)
		UVAL = (unsigned long long)va_arg(argument, uintmax_t);
	else if (FLAG & FLAG_L)
		UVAL = (unsigned long)va_arg(argument, uintmax_t);
	else if (FLAG & FLAG_J)
		UVAL = (uintmax_t)va_arg(argument, uintmax_t);
	else if (FLAG & FLAG_Z)
		UVAL = va_arg(argument, size_t);
	else if (FLAG & FLAG_HH)
		UVAL = (unsigned char)va_arg(argument, unsigned int);
	else if (FLAG & FLAG_H)
		UVAL = (unsigned short)va_arg(argument, uintmax_t);
	else
		UVAL = va_arg(argument, unsigned int);
	if (FLAG & FLAG_LEFT && (FLAG &= ~FLAG_SPACE))
	{
		FLAG &= ~FLAG_ZERO;
	}
	else if (PAD > 0 && (FLAG & FLAG_ZERO) && PREC < 0)
	{
		PREC = PAD;
		PAD = 0;
	}
	if (UVAL == 0)
		ft_get_null_flag();
}

void			ft_flagg(void)
{
	if (VAL < 0 && (FLAG |= FLAG_NEG) && (FLAG |= FLAG_PREF))
	{
		ft_strcat(PREF, "-");
		VAL *= -1;
	}
	else if (FLAG & FLAG_PLUS && (FLAG |= FLAG_PREF))
		ft_strcat(PREF, "+");
	else if (FLAG & FLAG_SPACE && (FLAG |= FLAG_PREF))
		ft_strcat(PREF, " ");
	if (FLAG & FLAG_LEFT && (FLAG &= ~FLAG_SPACE))
		FLAG &= ~FLAG_ZERO;
	if (PAD > 0 && (FLAG & FLAG_ZERO) && PREC < 0)
	{
		PREC = PAD;
		PAD = 0;
		FLAG |= FLAG_PREC;
	}
	if (PAD > 0 && (FLAG & FLAG_ZERO) && FLAG & FLAG_PREC && VAL > 0)
		FLAG &= ~FLAG_ZERO;
	if (VAL == 0 && FLAG & FLAG_PREC)
		FLAG |= FLAG_NULL;
}

void			ft_get_value(va_list argument)
{
	if (FLAG & FLAG_LL)
	{
		VAL = (long long)va_arg(argument, long long);
	}
	else if (FLAG & FLAG_L)
		VAL = (long)va_arg(argument, intmax_t);
	else if (FLAG & FLAG_J)
		VAL = va_arg(argument, intmax_t);
	else if (FLAG & FLAG_Z)
		VAL = va_arg(argument, intmax_t);
	else if (FLAG & FLAG_HH)
		VAL = (char)va_arg(argument, int);
	else if (FLAG & FLAG_H)
		VAL = (short)va_arg(argument, int);
	else
		VAL = (long)va_arg(argument, int);
}
