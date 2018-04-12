/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:24:38 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
** Counts the number values stocked from the head
**
*/


int		ft_lst_count(t_lst *head)
{
	t_lst *tmp;
	size_t nbr_el;

	nbr_el = 0;
	tmp = head->next;
	while (tmp != head)
	{
		++nbr_el;
		tmp = tmp->next;
	}
	return (nbr_el);

}
