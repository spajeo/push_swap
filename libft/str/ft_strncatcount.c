/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncatcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 19:02:41 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/29 23:17:38 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncatcount(char *s1, const char *s2, int n)
{
	int		i;
	char	*p_s1;
	size_t	cat_count;

	cat_count = 0;
	i = -1;
	p_s1 = s1;
	i = -1;
	while (s2[cat_count] && ++i < n)
	{
		*p_s1 = s2[cat_count];
		++p_s1;
		++cat_count;
	}
	if (cat_count)
		*p_s1 = 0;
	return (cat_count);
}
