/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_refill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:56:46 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:56:47 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_refill_b_lim(int lim, int nb)
{

	while (nb != 0 && lim != 0)
	{
		ft_ps_operations("pa");
		--nb;		
		--lim;		
	}
}

void ft_ps_refill_a(int nb)
{

	while (nb != 0)
	{
		ft_ps_operations("pb");
		--nb;
	}
}

void ft_ps_refill_b(int nb)
{

	while (nb != 0)
	{
		ft_ps_operations("pa");
//		ft_ps_operations("ra");
		--nb;		
	}
}

void ft_ps_refill_a_lim(int lim, int nb)
{

	while (nb != 0 && lim != 0)
	{
		ft_ps_operations("pb");
		--nb;		
		--lim;		
	}
}

void ft_ps_refill()
{

	while (ft_lst_count(&HEAD_LB) > 0)
	{
		ft_ps_operations("pa");
	}
}
