/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:01:01 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/28 23:53:19 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s1);
	while (*(s2 + i) && i < n)
	{
		(*(s1 + len + i) = *(s2 + i));
		++i;
	}
	*(s1 + len + i) = '\0';
	return (s1);
}
