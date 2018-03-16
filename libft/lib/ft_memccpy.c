/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 23:53:38 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/30 17:27:57 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
									const void *restrict src, int c, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n--)
	{
		if ((*ptr1++ = *ptr2++) == (unsigned char)c)
			return ((void *)ptr1++);
	}
	return (NULL);
}
