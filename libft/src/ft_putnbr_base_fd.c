/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 20:46:40 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 01:00:06 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_base_fd(char *c_base, long long n_base, long long val, int fd)
{
	if (val < 0)
	{
		write(fd, "-", 1);
		val *= -1;
	}
	if (val >= n_base)
	{
		ft_putnbr_base_fd(c_base, n_base, val / n_base, fd);
		write(fd, &c_base[val % n_base], 1);
	}
	else
		write(fd, &c_base[val % n_base], 1);
}
