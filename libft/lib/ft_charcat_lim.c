/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcat_lim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 01:03:34 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 11:22:46 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_charcat_lim(char *restrict s1, char c, size_t buff_size)
{
	char	*p_s1;
	size_t	buff_max;

	buff_max = buff_size;
	p_s1 = s1;
	while (*p_s1)
	{
		--buff_size;
		++p_s1;
	}
	if (!buff_size)
	{
		write(1, s1, buff_max);
		ft_bzero(s1, buff_max);
		p_s1 = s1;
		buff_size = buff_max;
	}
	*p_s1 = c;
	return (s1);
}
