/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_buff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 13:01:41 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:35:48 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_buff(char *c_base, long long val, long long n_base,
		char *buff)
{
	long long		nb;
	size_t			len;
	size_t			b_len;

	len = 0;
	nb = val;
	while (++len && (nb = nb / n_base))
		;
	nb = val;
	if (nb < 0 && (nb = -1 * nb))
		len++;
	b_len = ft_strlen(buff);
	while ((buff[b_len + len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	if (val < 0)
		buff[b_len] = '-';
	return (buff);
}
