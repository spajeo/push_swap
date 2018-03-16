/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffnwstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:31:38 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/28 15:06:27 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_buffnwstr(char *buff, wchar_t *str, int n)
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (total < n && str[i])
	{
		total += ft_buffwchar(buff + total, str[i]);
		i++;
	}
	return (total);
}
