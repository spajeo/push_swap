/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:32:16 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/28 18:56:53 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_buffwstr(char *buff, wchar_t *str)
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (*(str + i))
	{
		total += ft_buffwchar(buff + total, *(str + i));
		++i;
	}
	return (total);
}
