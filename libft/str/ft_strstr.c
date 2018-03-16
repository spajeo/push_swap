/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 00:00:04 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/14 03:50:59 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int			i;
	size_t		n;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	if (!*str)
		return (0);
	while (str[i])
	{
		n = 0;
		while (to_find[n] == str[i + n])
		{
			if (n == (ft_strlen(to_find) - 1))
				return ((char *)(str + i));
			n++;
		}
		i++;
	}
	return (0);
}
