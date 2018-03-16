/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:36:32 by Scarlett          #+#    #+#             */
/*   Updated: 2017/05/29 00:08:26 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long long nb, int n_base)
{
	long long len;

	len = 0;
	if (nb < 0 && (nb *= -1))
		++len;
	if (nb != 0)
		while (++len && (nb = nb / n_base))
			;
	return (len);
}
