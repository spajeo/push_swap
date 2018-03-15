/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsetblim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:21:04 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/30 17:24:30 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memsetblim(char *dest, int src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		dest[i] = src;
		++i;
	}
	if (i > 0)
		dest[i] = 0;
	return (i);
}
