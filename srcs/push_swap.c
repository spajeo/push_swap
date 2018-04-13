/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/9 14:9:48 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_fix_right_place()
{
	t_lst *tmp;

	tmp = HEAD_LA.next;
	while (tmp  != &HEAD_LA)
	{
		if (PILE(tmp)->position == 0 &&
			*ft_get_int_order(&HEAD_LA, &ft_get_pile_data, 
				ft_get_int_abspos(&HEAD_LA, &ft_get_pile_data, PILE(tmp)->data) 
						== PILE(tmp)->data ))
		{
//			TESTINTINT("mark position", *ft_get_int_order(&HEAD_LA, &ft_get_pile_data, ft_get_int_abspos(&HEAD_LA, &ft_get_pile_data, PILE(tmp)->data)), 	ft_get_int_abspos(&HEAD_LA, &ft_get_pile_data, PILE(tmp)->data) );
			PILE(tmp)->position = 2;
	ft_ps_print_stack_a_and_b();
		}
		tmp = tmp->next;
	}
}

/*
** Add a set for position
*/
/*
int ft_sorting()
{
	if (PILE(HEAD_LB.next)->data < PILE(HEAD_LB.next->next)->data &&
			PILE(HEAD_LB.next)->data < PILE(HEAD_LB.next->next)->data)
	{
		ft_ps_pushswap_operation("sa");
		ft_ps_pushswap_operation("sb");
	}
	else if (PILE(HEAD_LB.next)->data < PILE(HEAD_LB.next->next)->data)
	{
		ft_ps_pushswap_operation("sb");
	}
	else if (PILE(HEAD_LA.next)->data > PILE(HEAD_LA.next->next)->data)
	{
		ft_ps_pushswap_operation("sa");
	}
	return (1);
}

void		ft_lst_convert_all_val(t_lst *head, int *(* get_int)(t_lst *), int val)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		*get_int(tmp) = val;
		tmp= tmp->next;	
	}
}
*/

void			ft_organise_around_pivot_b()
{
	int		pivot;
	int		nb = 0;

	while (!(ft_is_there_inf_int(&HEAD_LA, &ft_get_pile_position, 1)))
	{
//	TESTSTR("pivot B","");
		if (ft_lst_is_max_min_sorted(&HEAD_LA, &ft_get_pile_data))
			return;
/*		while (!(JUST_HEAD(HEAD_LB)) && !(ft_is_there_inf_int(&HEAD_LB, &ft_get_pile_position, 1)))
		{
			TESTSTR("pivot B","REFILL");
			ft_ps_print_stack_a_and_b();
			ft_refill_b(ft_get_int_abspos(&HEAD_LB, &ft_get_pile_position, 0)); //trouver la limite// autre fonction
			TESTINT("REFILL",ft_get_int_abspos(&HEAD_LB, &ft_get_pile_position, 0));
		}
*/
		if (!(JUST_HEAD(HEAD_LB)))
		{
			while (PILE(HEAD_LB.next)->position > 0)
			{
				ft_ps_pushswap_operation("pb");
			}
			pivot = PILE(HEAD_LB.next)->data;
			PILE(HEAD_LB.next)->position = 1;
			ft_ps_pushswap_operation("pb");
			ft_ps_pushswap_operation("ra");
			while ((ft_is_there_inf_int(&HEAD_LB, &ft_get_pile_data, pivot)))
			{
				if (PILE(HEAD_LB.next)->data < pivot)
				{
					ft_ps_pushswap_operation("pb");
				}
				else
				{
					ft_ps_pushswap_operation("rb");
					++nb;
				}
			}
				while (nb != 0)
				{
					ft_ps_pushswap_operation("rrb");
					--nb;
				}
			ft_ps_pushswap_operation("rra");
		}
/*
*/
	}
}

int			ft_organise_around_pivot_a()
{
	int		pivot;
	int		nb = 0;

	if (!(ft_is_there_inf_int(&HEAD_LA, &ft_get_pile_position, 1)))
	{
		ft_refill_a(ft_lst_count(&HEAD_LB));
//		ft_fix_right_place();
	}
	while (PILE(HEAD_LA.next)->position == 1)
	{
		ft_ps_pushswap_operation("pa");
	}
	pivot = PILE(HEAD_LA.next)->data;
	PILE(HEAD_LA.next)->position = 1;
	ft_ps_pushswap_operation("pa");
	ft_ps_pushswap_operation("rb");
	while ((ft_is_there_inf_int(&HEAD_LA, &ft_get_pile_data, pivot)))
	{
		if (PILE(HEAD_LA.next)->data < pivot)
		{
			ft_ps_pushswap_operation("pa");
		}
		else
		{
			ft_ps_pushswap_operation("ra");
			++nb;
		}
	}
		while (nb != 0)
		{
			ft_ps_pushswap_operation("rra");
			--nb;
		}
	ft_ps_pushswap_operation("rrb");
/*
	if (!(ft_is_there_inf_int(&HEAD_LA, &ft_get_pile_position, 1)))
	{
		ft_refill_a(ft_lst_count(&HEAD_LB));
		ft_fix_right_place();
	}
*/
	return (1);
}

int			main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	++av;
	--ac;
	NODE_INIT(HEAD_LA); NODE_INIT(HEAD_LB); NODE_INIT(HEAD_PS_MV);
	ft_exec_parse_ps((*av), &ft_ps_convert_argv);
	ft_ps_print_stack_a_and_b();
	while (!(ft_ps_next_t_data_issorted(&HEAD_LA, &HEAD_LB)))
	{
			ft_organise_around_pivot_a();
				if (ft_ps_next_t_data_issorted(&HEAD_LA, &HEAD_LB))
					break;
			ft_fix_right_place();
			ft_organise_around_pivot_b();
			//ft_refill_a(ft_lst_count(&HEAD_LB));
	}
	ft_refill_a(ft_lst_count(&HEAD_LB));
	ft_ps_print_stack_a_and_b();
	return (0);
}
