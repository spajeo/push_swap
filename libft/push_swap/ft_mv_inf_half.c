/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_inf_half.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:56:19 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**
*/

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"
/*
static int	ft_mv_inf_half()
{

	int nb_mv;

	PIVOT_POS = PIVOT_POS / 2 + PIVOT_POS % 2; 
	nb_mv = PIVOT_POS + 1;
	PS__HEAD.median_val = *ft_get_lst_from_val_position(PIVOT_POS, &HEAD_LA,  &ft_get_tpile_data);
	PIVOT = *ft_get_lst_from_val_position(PIVOT_POS, &HEAD_LA,  &ft_get_tpile_data);
	
ft_printf("debut ft_mv_half_in_b %zu\n", PS__HEAD.bucket_values);
ft_printf("PIVOT %zu\n", PIVOT);
	while (ft_is_there_inf_int(&HEAD_LA, &ft_get_tpile_data, PIVOT))
	{
		if (PILE(HEAD_LA.next)->data <= PIVOT)
		{
			ft_ps_pushswap_operation("pa");
			--nb_mv;
		} 
//		if (nb_mv != 0)
		{
			ft_ps_pushswap_operation("rra");
		}
	}
//ft_print_next_int(&HEAD_LA, &ft_get_tpile_data);
ft_printf("________________________\n");
	if (PIVOT > 4)
	{
printf("{%zu}\n", PS__HEAD.bucket_values);
		ft_mv_inf_half();
	}
	ft_sorting();
	ft_refill(PS__HEAD.bucket_values);
	return (1);
}
//*/
