/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_charstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 17:46:41 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/03 12:05:04 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_printing_str(va_list args)
{
	char	*str;
	int		len;

	if (!(str = va_arg(args, char *)))
		str = "(null)";
	if (!(len = ft_strlen(str)) && FLAG & FLAG_ZERO)
		FLAG &= ~FLAG_ZERO;
	else if ((len) < PREC || PREC < 0)
		PREC = len;
	(PAD = (PAD <= PREC) ? 0 : PAD - PREC);
	if (FLAG & FLAG_LEFT && PAD > 0)
	{
		ft_pr_strncatcount(str, PREC);
		ft_pr_memsetblim(' ', PAD);
	}
	else if (PAD > 0 && FLAG & FLAG_ZERO)
	{
		ft_pr_memsetblim('0', PAD);
		ft_pr_strncatcount(str, PREC);
	}
	else
	{
		ft_pr_memsetblim(' ', PAD);
		ft_pr_strncatcount(str, PREC);
	}
}

static int		ft_len_calc(wchar_t *str, int precision)
{
	int i;
	int total;
	int max_full_letter;

	i = 0;
	total = 0;
	while (total <= precision && str[i])
	{
		max_full_letter = total;
		total += ft_wcharlen(str[i]);
		i++;
	}
	return (max_full_letter);
}

void			ft_printing_wstr(wchar_t *str)
{
	int len;

	if ((len = ft_wstrlen_conv(str)) < PREC || PREC < 0)
		PREC = len;
	else
		PREC = ft_len_calc(str, PREC);
	PAD = (PAD < PREC) ? 0 : PAD - PREC;
	if (FLAG & FLAG_LEFT && PAD > 0)
	{
		if (ft_pr_buffnwstr(str, PREC) == -1)
			return ;
		ft_pr_memsetblim(' ', PAD);
	}
	else if (FLAG & FLAG_ZERO)
	{
		ft_pr_memsetblim('0', PAD);
		if (ft_pr_buffnwstr(str, PREC) == -1)
			return ;
	}
	else
	{
		ft_pr_memsetblim(' ', PAD);
		if (ft_pr_buffnwstr(str, PREC) == -1)
			return ;
	}
}

void			ft_printing_char(void)
{
	if ((((FLAG & FLAG_ZERO && FLAG & FLAG_PERC)) && PAD > 0)
			|| (FLAG & FLAG_PAD && FLAG & FLAG_C)
			|| (FLAG & FLAG_PAD && FLAG & FLAG_PERC))
		--PAD;
	if (FLAG & FLAG_LEFT && PAD > 0)
	{
		ft_pr_charcat();
		ft_pr_memsetblim(' ', PAD);
	}
	else if (FLAG & FLAG_ZERO)
	{
		ft_pr_memsetblim('0', PAD);
		ft_pr_charcat();
	}
	else
	{
		ft_pr_memsetblim(' ', PAD);
		ft_pr_charcat();
	}
}

void			ft_printing_wchar(va_list argument)
{
	wchar_t var;

	var = (wchar_t)va_arg(argument, int);
	if ((B_LEN + PAD + 4) >= BUFF_SIZE)
		ft_empty_buff();
	if (MB_CUR_MAX == 1 && var > 127)
	{
		B_LEN = -1;
		return ;
	}
	if (FLAG & FLAG_PAD && !(FLAG & FLAG_ZERO))
		--PAD;
	if (FLAG & FLAG_LEFT && PAD > 0)
	{
		B_LEN += ft_buffwchar(BUFF + B_LEN, var);
		ft_pr_memsetblim(' ', PAD);
	}
	else
	{
		ft_pr_memsetblim(' ', PAD);
		B_LEN += ft_buffwchar(BUFF + B_LEN, var);
	}
}
