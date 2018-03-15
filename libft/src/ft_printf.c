/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 10:22:37 by Mike              #+#    #+#             */
/*   Updated: 2017/07/19 16:56:51 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_format_init(void)
{
	FLAG = 0;
	ft_bzero((void *)PREF, sizeof(char) * 4);
	PAD = 0;
	PREC = -1;
	UVAL = 0;
	VAL = 0;
	BASE = 10;
}

static void		ft_buffvar(const char **format, va_list *argument)
{
	int j;

	while ((j = -1) && ++(*format) && **format && g_blen != -1
			&& !(g_flag & FORMAT_PERC) && !(g_flag & FLAG_FIN))
	{
		while (g_flist[++j].c && **format != g_flist[j].c)
			;
		if (**format == g_flist[j].c)
			g_flist[j].f(g_flist[j].flag, *argument);
		else if ((j = -1))
		{
			while (g_flags[++j].flag && **format != g_flags[j].c)
				;
			if (**format == g_flags[j].c && (*format))
				g_flags[j].func(g_flags[j].flag);
			else if (**format == '.')
				*format += ft_precision(*format);
			else if ('1' <= **format && **format <= '9')
				*format += ft_padding(*format);
			else if ((FLAG |= FLAG_FIN) && (VAR = **format))
				ft_ptrsformat_fc(FLAG_C, *argument);
		}
	}
}

int				ft_printf(const char *format, ...)
{
	va_list	argument;

	CHECK_INTRO;
	B_LEN = 0;
	*BUFF = 0;
	va_start(argument, format);
	while (*format && B_LEN != -1)
	{
		if (*format == '%' && format)
		{
			ft_format_init();
			ft_buffvar(&format, &argument);
		}
		if (*format != '%' && B_LEN != -1)
		{
			format += ft_pr_strncatcount(format,
							ft_strlen_c(((char *)format), '%'));
		}
	}
	(B_LEN != -1) ? write(1, BUFF, B_LEN) : 0;
	va_end(argument);
	return ((BUFF_OFF) ? (g_total = -1) : (g_total += B_LEN));
}
