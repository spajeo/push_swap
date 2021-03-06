/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcatcount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:28:54 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/28 15:04:43 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charcatcount(char *restrict s1, char c)
{
	char	*p_s1;

	p_s1 = s1;
	while (*p_s1)
	{
		++p_s1;
	}
	*p_s1 = c;
	*(++p_s1) = 0;
	return (1);
}
