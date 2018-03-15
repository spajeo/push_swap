/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_c_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:16:32 by spajeo            #+#    #+#             */
/*   Updated: 2017/01/24 00:42:03 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_c_len(char *str, char c, int lenght)
{
	int len;

	len = -1;
	while (++len < lenght && *(str + len) != c && *(str + len))
	{
		;
	}
	return (len);
}
