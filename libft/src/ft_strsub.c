/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:01:50 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/24 15:30:31 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;

	i = 0;
	if (!s || !*s)
		return (0);
	cpy = ft_strnew(len);
	if (!cpy)
		return (NULL);
	while (len--)
	{
		cpy[i++] = s[start++];
	}
	return (cpy);
}
