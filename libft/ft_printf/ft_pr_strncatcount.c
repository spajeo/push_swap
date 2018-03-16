/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_strncatcount.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:33:36 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 16:33:40 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_strncatcount(const char *s2, size_t n)
{
	int		i;
	size_t	cat_count;

	cat_count = 0;
	i = -1;
	while (s2[cat_count] && cat_count < n)
	{
		if (B_LEN >= (BUFF_SIZE - CHAR__MIN0))
			ft_empty_buff(cat_count);
		*(BUFF + B_LEN) = s2[cat_count];
		++B_LEN;
		++cat_count;
	}
	if (cat_count)
		*(BUFF + B_LEN) = 0;
	return (cat_count);
}
