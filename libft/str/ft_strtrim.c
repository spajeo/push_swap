/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:47:36 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/24 20:05:33 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		a;
	int		b;
	int		i;
	int		len;

	a = 0;
	b = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (ft_is_white(s[a]))
		a++;
	if (len == a)
		return (ft_strdup(""));
	while (ft_is_white(s[len - 1 - b]))
		b++;
	str = ft_strnew(len - a - b);
	if (!str)
		return (NULL);
	while ((len - b - a))
		str[i++] = s[a++];
	str[i] = '\0';
	return (str);
}
