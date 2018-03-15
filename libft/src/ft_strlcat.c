/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 00:13:36 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/22 21:35:26 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len > size)
	{
		return (size + ft_strlen(src));
	}
	if (len < size)
		ft_strncat(dst, src, (size - len - 1));
	return (len + ft_strlen(src));
}
