/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lst_from_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:29:35 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Check if the first element is the higher in the list,
** by comparing the first element in the list with the following ones.
*/

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"


t_lst		*ft_get_lst_from_int(t_lst *head, int *(*get_int)(t_lst *), int ref)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (ref == *get_int(tmp))
		{
			return (tmp);
		}
		tmp = tmp->next;
	}
	return (0);
}
