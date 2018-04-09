/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:56:30 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:56:32 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void        ft_print_stack_a_and_b(void)
{
    ft_print_next_str(&HEAD_PS_MV);
    ft_printf(" ----------LA------------- \n");
    ft_print_next_int(&HEAD_LA, &ft_get_pile_data);
    ft_printf("__________LB______________\n");
    ft_print_next_int(&HEAD_LB, &ft_get_pile_data);
    ft_printf(" ----------------------- \n");
    TESTINTG("NB_MV",ft_lst_count(&HEAD_PS_MV));
}

