/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:55:38 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/23 00:44:44 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;
	size_t				i;

	i = -1;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (ptr1 > ptr2)
		return (ft_memcpy(dst, src, len));
	else
		while (++i < len)
			ptr1[i] = ptr2[i];
	return (dst);
}
