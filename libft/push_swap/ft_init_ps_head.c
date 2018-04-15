/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ps_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 23:02:16 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"
//
//DELETE ???//



void	ft_init_ps_head()
{
	if ((PS__HEAD.nb_a = ft_lst_count(&HEAD_LA)) == 0)
		EXIT_FAIL("NO ARGUMENTS");
/*
	PIVOT_POS = PS__HEAD.nb_a;
    VAL_MAX = *ft_getval_fromabspos(&HEAD_LA, &ft_get_tpile_data,ft_lst_count(&HEAD_LA));
	PS__HEAD.min_val = 			*ft_getval_fromabspos(&HEAD_LA,  &ft_get_tpile_data, 0);
	PS__HEAD.median_val = 		*ft_getval_fromabspos(&HEAD_LA,  &ft_get_tpile_data, PS__HEAD.nb_a / 2);
	PS__HEAD.max_val = 			*ft_getval_fromabspos(&HEAD_LA,  &ft_get_tpile_data, PS__HEAD.nb_a - 1);
	PS__HEAD.first_quarter_val = *ft_getval_fromabspos(PS__HEAD.nb_a / 4, &HEAD_LA,  &ft_get_tpile_data);
	PS__HEAD.third_quarter_val = *ft_getval_fromabspos (PS__HEAD.nb_a / 4 * 3, &HEAD_LA,  &ft_get_tpile_data);
//*/
	PS__HEAD.nb_b = 0;
//	PS__HEAD.bucket_values = PS__HEAD.nb_a;//
}
