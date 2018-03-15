/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 01:02:37 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/24 20:04:49 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int			nb;
	size_t				len;
	char				*c;

	len = 0;
	nb = (long int)n;
	while (++len && (nb = nb / 10))
		;
	nb = (long int)n;
	if (nb < 0 && (nb = -1 * nb))
		len++;
	if (!(c = ft_strnew(len)))
		return (NULL);
	while ((c[len - 1] = (nb % 10) + '0') && --len)
		nb = nb / 10;
	if (n < 0)
		c[0] = '-';
	return (c);
}
