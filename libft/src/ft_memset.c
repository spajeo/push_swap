/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:21:04 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/15 04:59:33 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char	*ptr;
	unsigned	long	*ptr2;
	unsigned	long	c2;
	int					i;
	size_t				len2;

	ptr = (unsigned char *)b;
	while ((len % 8) != 0 && len--)
		*ptr++ = (unsigned char)c;
	ptr2 = (unsigned long *)ptr;
	len2 = len / 8;
	c2 = 0;
	i = -1;
	while (++i < 8)
	{
		c2 <<= 8;
		c2 |= (unsigned char)c;
	}
	while (len2)
	{
		*ptr2++ = c2;
		--len2;
	}
	return (b);
}
