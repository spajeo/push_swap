/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_ptr_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 06:08:23 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/29 12:01:40 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptrsformat(unsigned long flag)
{
	FLAG |= flag;
}

void	ft_ptrsformat_h(unsigned long flag)
{
	if (FLAG & FLAG_H)
		FLAG |= FLAG_HH;
	else
		FLAG |= flag;
}

void	ft_ptrsformat_ll(unsigned long flag)
{
	FLAG |= flag;
}

void	ft_ptrsformat_l(unsigned long flag)
{
	if (FLAG & FLAG_L)
		FLAG |= FLAG_LL;
	else
		FLAG |= flag;
}

void	ft_ptrsformat_f(unsigned long flag)
{
	FLAG |= flag;
	ft_fin_conv();
}
