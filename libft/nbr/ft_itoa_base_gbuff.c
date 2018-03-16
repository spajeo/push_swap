/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_gbuff.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 00:11:40 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:14:30 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_itoa_base_gbuff(char *buff,
		double val, long long n_base, char *c_base)
{
	long long		nb;
	size_t			len;
	size_t			len_m;
	size_t			b_len;

	len = 0;
	nb = val;
	while (++len && (nb = nb / n_base))
		;
	nb = val;
	b_len = ft_strlen(buff);
	buff[b_len + len] = 0;
	if (nb < 0 && (nb = -1 * nb))
	{
		buff[b_len] = '-';
		len++;
	}
	len_m = len;
	while ((buff[b_len + len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	return (len_m);
}
