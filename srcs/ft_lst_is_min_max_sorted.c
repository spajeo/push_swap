/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_is_min_max_sorted.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:45:27 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

int		ft_lst_is_min_max_sorted(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head->prev)
	{
		if (*get_int(tmp) > *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
