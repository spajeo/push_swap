/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 20:04:35 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:28 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi_exit(const char *src)
{
	ssize_t			tmp;
	int			 	sign;

	sign = 1;
	tmp = 0;
	while (ft_isspace((int)*src))
		++src;
	if (*src == '-')
		sign = -1;
	if (ft_issign(*src))
		++src;
	if (!ft_isdigit(*src))
		EXIT_FAIL("Error : not a digit");
	while (ft_isdigit(*src))
	{
		tmp = TIME_10(tmp) + *src - '0';
		++src;
	}
	tmp = tmp * sign;
	if (tmp < INT_MIN || INT_MAX < tmp)
		EXIT_FAIL("Error : not an int value");
	return ((int)tmp);
}
