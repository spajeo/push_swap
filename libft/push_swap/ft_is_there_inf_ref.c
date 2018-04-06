/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_there_inf_ref.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:08:27 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"
#include "../includes/push_swap.h"
#include "../libft/includes/liblst.h"

/*
** Check if the first element is the higher in the list,
** by comparing the first element in the list with the following ones.
*/


int    ft_is_there_inf_ref(t_lst *head, int *(*get_int)(t_lst *), t_lst *ref)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (*get_int(ref) > *get_int(tmp))
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
