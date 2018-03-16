/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_buffnwstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 14:23:22 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 16:40:49 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_pr_buffnwstr(wchar_t *str, int n)
{
	int i;
	int total;
	int wchar_len;

	i = 0;
	wchar_len = 0;
	total = 0;
	while (*(str + i) && total < n)
	{
		if (B_LEN >= (BUFF_SIZE - WCHAR__MAX))
			ft_empty_buff();
		wchar_len = ft_buffwchar(BUFF + B_LEN, *(str + i));
		if (wchar_len > CHAR__LEN && MB_CUR_MAX == 1)
		{
			write(1, BUFF, B_LEN);
			return ((B_LEN = -1));
		}
		B_LEN += wchar_len;
		total += wchar_len;
		++i;
	}
	return (total);
}
