/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lst_from_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:29:35 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** Check if the first element is the higher in the list,
** by comparing the first element in the list with the following ones.
*/

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"


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
