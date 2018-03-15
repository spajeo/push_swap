/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:19:07 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/23 02:11:32 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	size_t		len;
	char		*cpy;

	i = -1;
	if (!s || !*s || !f)
		return (NULL);
	len = ft_strlen(s);
	cpy = ft_strnew(len);
	if (!cpy)
		return (NULL);
	while (++i < len)
		*(cpy + i) = f(*s++);
	return (cpy);
}
