/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 20:26:49 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/30 01:06:38 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcatcount(char *restrict s1, const char *restrict s2)
{
	char	*p_s1;
	size_t	cat_count;

	cat_count = -1;
	p_s1 = s1;
	while (s2[++cat_count])
	{
		*p_s1 = s2[cat_count];
		++p_s1;
	}
	*p_s1 = 0;
	return (cat_count);
}
