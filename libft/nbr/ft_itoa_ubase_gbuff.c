/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ubase_gbuff.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 08:58:40 by Scarlett          #+#    #+#             */
/*   Updated: 2017/07/02 20:21:23 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_itoa_ubase_gbuff(char *buff,
		unsigned long long val, long long n_base, char *c_base)
{
	unsigned long long		nb;
	size_t					len;
	size_t					len_m;

	len = 0;
	nb = val;
	while (++len && (nb = nb / n_base))
		;
	nb = val;
	len_m = len;
	buff[len] = 0;
	while ((buff[len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	return (len_m);
}
