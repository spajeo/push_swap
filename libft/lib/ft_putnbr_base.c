/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 12:29:46 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/28 23:35:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_base(long long val, long long n_base)
{
	char *c_base;

	c_base = "1234567890abcdef";
	if (val < 0)
	{
		write(1, "-", 1);
		val *= -1;
	}
	if (val >= n_base)
	{
		ft_putnbr_base(val / n_base, n_base);
		write(1, &c_base[val % n_base], 1);
	}
	else
		write(1, &c_base[val % n_base], 1);
}
