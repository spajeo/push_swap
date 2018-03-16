/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ubase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 01:27:32 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/15 02:35:15 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_ubase(char *c_base, long long n_base, unsigned long long n)
{
	unsigned long long			nb;
	size_t						len;
	char						*c;

	len = 0;
	nb = n;
	while (++len && (nb = nb / n_base))
		;
	nb = n;
	if (!(c = ft_strnew(len)))
		return (NULL);
	while ((c[len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	return (c);
}
