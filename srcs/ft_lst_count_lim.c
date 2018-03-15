/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:24:38 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

/*
** Counts the number values stocked from the head
**
*/


int		ft_lst_count_lim(t_lst *head, int *(*get_int)(t_lst *), int lim)
{
	t_lst *tmp;
	size_t nbr_el;

	nbr_el = 0;
	tmp = head->next;
	while (tmp != head)
	{
		++nbr_el;
		if (*get_int(tmp) == lim)
		{
			return (nbr_el);
		}
		tmp = tmp->next;
	}
	return (nbr_el);

}
