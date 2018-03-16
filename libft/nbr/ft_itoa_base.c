/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 00:38:54 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:38:58 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(char *c_base, int n_base, long long n)
{
	long long			nb;
	size_t				len;
	char				*c;

	len = 0;
	nb = n;
	while (++len && (nb = nb / n_base))
		;
	nb = n;
	if (nb < 0 && (nb = -1 * nb))
		len++;
	if (!(c = ft_strnew(len)))
		return (NULL);
	while ((c[len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	if (n < 0)
		c[0] = '-';
	return (c);
}
