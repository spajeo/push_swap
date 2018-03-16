/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_itoa_ubase_gbuff.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 08:58:40 by Scarlett          #+#    #+#             */
/*   Updated: 2017/07/03 13:49:22 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_pr_itoa_ubase_gbuff(
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
	if ((B_LEN + len) > BUFF_SIZE)
		ft_empty_buff();
	len_m = len;
	BUFF[B_LEN + len] = 0;
	while ((BUFF[B_LEN + len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	return (len_m);
}
