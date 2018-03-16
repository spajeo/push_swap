/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ubase_buff.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 01:32:40 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:34:56 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_itoa_ubase_buff(char *c_base, unsigned long long val,
		long long n_base, char *buff)
{
	unsigned long long		nb;
	size_t					len;
	size_t					t_len;

	len = 0;
	nb = val;
	while (++len && (nb = nb / n_base))
		;
	t_len = len;
	nb = val;
	while ((buff[len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	return (t_len);
}
