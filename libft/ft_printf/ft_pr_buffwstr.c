/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_buffwstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 15:48:41 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 16:39:39 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_pr_buffwstr(wchar_t *wstr)
{
	int i;
	int total;
	int wchar_len;

	i = 0;
	wchar_len = 0;
	total = 0;
	while (*(wstr + i))
	{
		if (B_LEN >= (BUFF_SIZE - WCHAR__MAX))
			ft_empty_buff();
		wchar_len = ft_buffwchar(BUFF + B_LEN, *(wstr + i));
		if (MB_CUR_MAX == 1 && wchar_len > CHAR__LEN)
		{
			write(1, BUFF, B_LEN - wchar_len);
			return ((B_LEN = -1));
		}
		B_LEN += wchar_len;
		total += wchar_len;
		++i;
	}
	return (total);
}
