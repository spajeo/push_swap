/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_reflst_sup.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:08:27 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"

/*
**  CHECK if the REF->INT is HIGHER to the list's values
** by comparing the REF value to the list's elements..
**
*/


int    ft_is_reflst_sup(t_lst *head, int *(*get_int)(t_lst *), t_lst *ref)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (*get_int(ref) > *get_int(tmp))
		{
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}
