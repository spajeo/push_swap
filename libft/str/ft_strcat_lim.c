/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_lim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:26:14 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/28 23:39:22 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat_lim(char *restrict s1, const char *restrict s2,
							size_t buff_size)
{
	char	*p_s1;
	size_t	buff_max;
	size_t	cat_value;

	buff_max = buff_size;
	cat_value = -1;
	p_s1 = s1;
	while (*p_s1)
	{
		--buff_size;
		++p_s1;
	}
	while (s2[++cat_value] && --buff_size)
	{
		if (!buff_size)
		{
			write(1, s1, buff_max);
			ft_bzero(s1, buff_max);
			p_s1 = s1;
			buff_size = buff_max;
		}
		*p_s1 = s2[cat_value];
		++p_s1;
	}
	return (s1);
}
