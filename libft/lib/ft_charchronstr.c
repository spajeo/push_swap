/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charchronstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 15:32:42 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:41:09 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charchronstr(const char *listofchrstosearch, const char *strtosearchin)
{
	int i;

	i = -1;
	while (strtosearchin[++i])
	{
		if (ft_charchr(listofchrstosearch, strtosearchin[i]))
			return (i);
	}
	return (0);
}
