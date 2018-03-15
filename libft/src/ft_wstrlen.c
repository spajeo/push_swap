/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 08:39:38 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/27 15:24:30 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  wchar_t == int, contains values worth 1 - 4 char, here we are calculating
**  the lenght it will be once converted.
*/

#include "libft.h"

int	ft_wstrlen(wchar_t *str)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] <= 0x7F)
			len += 1;
		else if (str[i] <= 0x7FF)
			len += 2;
		else if (str[i] <= 0xFFFF)
			len += 3;
		else if (str[i] <= 0x1FFFFF)
			len += 4;
		++i;
	}
	return (len);
}
