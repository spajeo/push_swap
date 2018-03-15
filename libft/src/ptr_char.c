/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 06:06:39 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 17:03:23 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptrsformat_fs(unsigned long flag, va_list argument)
{
	FLAG |= flag;
	if (FLAG & FLAG_LEFT)
	{
		FLAG &= ~FLAG_SPACE;
		FLAG &= ~FLAG_ZERO;
		FLAG &= ~FLAG_SPACE;
	}
	if (!(FLAG & FLAG_L))
		ft_printing_str(argument);
	else
		ft_ptrsformat_fws(flag, argument);
}

void	ft_ptrsformat_fws(unsigned long flag, va_list argument)
{
	wchar_t	*str;

	FLAG |= flag;
	if (FLAG & FLAG_LEFT)
	{
		FLAG &= ~FLAG_SPACE;
		FLAG &= ~FLAG_ZERO;
		FLAG &= ~FLAG_SPACE;
	}
	if (!(str = (wchar_t *)va_arg(argument, wchar_t *)))
		str = L"(null)";
	if (!(FLAG & FLAG_PREC) && !(FLAG & FLAG_PAD))
	{
		if (ft_pr_buffwstr(str) == -1)
			return ;
	}
	else
	{
		ft_printing_wstr(str);
	}
}

void	ft_ptrsformat_fc(unsigned long flag, va_list argument)
{
	FLAG |= flag;
	if (!(FLAG & FLAG_L))
	{
		if (FLAG & FLAG_C && !(FLAG & FLAG_PERC) && !(FLAG & FLAG_FIN))
		{
			VAR = va_arg(argument, int);
		}
		else if (FLAG & FLAG_PERC && !(FLAG & FLAG_FIN))
		{
			VAR = '%';
		}
		ft_printing_char();
	}
	else
		ft_printing_wchar(argument);
}

void	ft_ptrsformat_fwc(unsigned long flag, va_list argument)
{
	FLAG |= flag;
	ft_printing_wchar(argument);
}
