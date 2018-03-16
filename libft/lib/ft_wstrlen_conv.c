/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen_conv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 22:56:12 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/28 18:17:12 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  wchar_t == int, contains values worth 1 - 4 char, here we are calculating
**  the lenght it will be once converted.
*/

int	ft_wstrlen_conv(wchar_t *str)
{
	int	len;
	int	i;

	i = -1;
	len = 0;
	while (str[++i])
	{
		if (str[i] <= 0x7F)
			len += 1;
		else if (str[i] <= 0x7FF)
			len += 2;
		else if (str[i] <= 0xFFFF)
			len += 3;
		else if (str[i] <= 0x1FFFFF)
			len += 4;
	}
	return (len);
}
