/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:47:36 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/22 18:45:04 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim_c(char const *s, char c, int *size_next)
{
	char	*str;
	int		a;
	int		b;
	int		len;

	a = 0;
	b = 0;
	len = ft_strlen(s);
	while (s[a] == c)
		a++;
	if (s && len == a)
		return (NULL);
	while (s[a + b] != c && s[a + b])
		b++;
	if (!(str = ft_strnew(b)))
		return (NULL);
	*size_next = a + b;
	while (b--)
		str[b] = s[a + b];
	return (str);
}
