/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_strcatcount.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:16:57 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 16:23:54 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_strcatcount(const char *restrict s2)
{
	size_t	cat_count;

	cat_count = -1;
	while (s2[++cat_count])
	{
		CHECK_BUFF_LIM(CHAR__LEN);
		*(BUFF + B_LEN) = s2[cat_count];
		++B_LEN;
	}
	*(BUFF + B_LEN) = 0;
	return (cat_count);
}
