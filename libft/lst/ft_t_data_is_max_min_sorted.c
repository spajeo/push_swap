/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_data_is_max_min_sorted.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 22:12:14 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:54 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int		ft_t_data_is_max_min_sorted(t_lst *head)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (!(PILE(tmp)->data > PILE(tmp->next)->data))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
