/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_first_inf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:34:44 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"

/*
** Check if the first element is the higher in the list,
** by comparing the first element in the list with the following ones.
*/


int   ft_is_first_inf(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst *tmp;

	tmp = head->next->next;
	while (tmp != head)
	{
		if (*get_int(head->next) > *get_int(tmp))
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
