/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:29:54 by spajeo            #+#    #+#             */
/*   Updated: 2017/09/24 16:50:08 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		a;
	int		p;

	i = 0;
	a = 0;
	p = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while (s1[a])
	{
		str[i++] = s1[a++];
	}
	while (s2[p])
	{
		str[i++] = s2[p++];
	}
	str[++i] = 0;
	free(s1);
	free(s2);
	return (str);
}
