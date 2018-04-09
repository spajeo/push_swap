/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int_position.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 20:47:23 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int	*ft_get_int_position(size_t position, t_lst *head, int*(*get_data)(t_lst *))
{
	t_lst		*tmp;
	t_lst		*test;
	size_t      inferior;

	inferior = 0;
	tmp = head->next;
	test = head->next;
	while (tmp != head)
	{
		while (test != head)
		{
			if (*get_data(test) < *get_data(tmp))
			{
				++inferior;
			}
			test = test->next;
		}
		if (inferior == position)
		{
			*get_data(tmp) = position;
			return (get_data(tmp));
		}
		inferior = 0;
		test = head->next;
		tmp = tmp->next;
	}
	return (0);
}
