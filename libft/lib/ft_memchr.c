/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:15:41 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/13 20:42:17 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	char					*ptr;

	i = -1;
	ptr = (char *)s;
	while (++i < n)
		if (ptr[i] == (char)c)
			return ((void *)&ptr[i]);
	return (NULL);
}
