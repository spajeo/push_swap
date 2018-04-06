/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_t_data_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 03:47:09 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

int	ft_lst_get_int_abs_pos(t_lst *head, int *(* get_int)(t_lst *) , size_t position)
{
	t_lst		*tmp;
	t_lst		*test;
	size_t      inferior;

	inferior = 0;
	tmp = head->next;
	while (tmp != head->prev)
	{
		while (test != head)
		{
			if (*get_int(tmp) < *get_int(test))
			{
				++inferior;
			}
			test = test->next;
		}
		if (inferior == position)
			return (*get_int(tmp));
		inferior = 0;
		test = head->next;
		tmp = tmp->next;
	}
	return (0);
}
