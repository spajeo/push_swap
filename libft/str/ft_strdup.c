/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 02:08:01 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/22 21:35:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		i;
	size_t		len;

	i = -1;
	len = ft_strlen(s1);
	s2 = ft_strnew(len);
	if (!s2)
		return (NULL);
	s2[len] = '\0';
	while (++i < len)
		s2[i] = s1[i];
	return (s2);
}
