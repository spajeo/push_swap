/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_there_inf_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:38:15 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"
#include "../includes/push_swap.h"
#include "../libft/includes/liblst.h"

/*
** Check if the REF value is HIGHER or EQUAL to the value in the list 
** by comparing the REF value to the list's elements..
*/


int   ft_is_there_inf_int(t_lst *head, int *(*get_int)(t_lst *), int ref)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (*get_int(tmp) < ref)
		{
TESTINT("       ref", ref );
TESTINT("inf to ref", *get_int(tmp) );
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
