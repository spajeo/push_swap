/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itostr_ubase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 20:26:35 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 00:58:52 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itostr_ubase(char **str, char *c_base, int n_base, uintmax_t n)
{
	uintmax_t			nb;
	size_t				len;
	size_t				n_char;

	len = 0;
	nb = n;
	while (++len && (nb /= n_base))
		;
	nb = n;
	n_char = len;
	if (!(*str = ft_strnew(len)))
		return (0);
	**str = 0;
	while ((str[0][len - 1] = c_base[nb % n_base]) && --len)
		nb = nb / n_base;
	return (n_char);
}
