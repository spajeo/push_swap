/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:43:20 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/18 05:43:01 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (j + i < n && s2[j] == s1[i + j])
		{
			if (j == (ft_strlen(s2) - 1))
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
