/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_base_fd.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 18:35:34 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:55:41 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_unsigned_base_fd(char *c_base,
		unsigned long long n_base, unsigned long long val, int fd)
{
	if (val >= n_base)
	{
		ft_putnbr_base_fd(c_base, n_base, val / n_base, fd);
		write(fd, &c_base[val % n_base], 1);
	}
	else
		write(fd, &c_base[val % n_base], 1);
}
