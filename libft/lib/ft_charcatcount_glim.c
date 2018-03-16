/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcatcount_glim..c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 15:15:12 by spajeo            #+#    #+#             */
/*   Updated: 2017/05/29 01:04:43 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charcatcount_glim(char *restrict s1, char c,
								int n_global_blen, size_t buff_max)
{
	char *p_s1;

	p_s1 = s1;
	if (!(buff_max - n_global_blen) || !(buff_max - n_global_blen - 1))
	{
		write(1, s1, buff_max);
		*s1 = 0;
		p_s1 = s1;
		n_global_blen = 0;
	}
	*p_s1 = c;
	return (1);
}
