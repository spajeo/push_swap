/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_memsetblim.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:33:27 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 16:33:32 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_memsetblim(int src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (B_LEN >= (BUFF_SIZE - CHAR__MIN0))
			ft_empty_buff();
		*(BUFF + B_LEN) = src;
		++B_LEN;
		++i;
	}
	if (i > 0)
		*(BUFF + B_LEN + 1) = 0;
	return (i);
}
