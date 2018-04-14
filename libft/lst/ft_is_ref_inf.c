/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ref_inf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:38:15 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"

/*
** Check if the REF value is INFERIOR to the list's values
** by comparing the REF value to the list's elements..
*/


int   ft_is_ref_inf(t_lst *head, int *(*get_int)(t_lst *), int ref)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (*get_int(tmp) < ref)
		{
TESTINT("       ref", ref );
TESTINT("inf to ref", *get_int(tmp) );
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}
