/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 00:04:59 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/22 21:34:34 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	len1;
	int	len2;

	len1 = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	if (!len1 || !len2 || !n)
		return (0);
	return (ft_memcmp(s1, s2, ft_min(ft_min(n, len1), len2)));
}
