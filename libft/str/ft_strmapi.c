/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 01:19:16 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/23 02:16:50 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*cpy;
	int		len;

	i = -1;
	if (!s || !*s || !f)
		return (NULL);
	len = ft_strlen(s);
	cpy = ft_strnew(len);
	if (!cpy)
		return (NULL);
	while (++i < len)
		*(cpy + i) = f(i, *s++);
	return (cpy);
}
