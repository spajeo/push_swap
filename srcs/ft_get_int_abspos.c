/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int_abspos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:49:34 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

int	ft_get_int_abspos(t_lst *head, int*(*get_int)(t_lst *), int val)
{
	t_lst		*tmp;
	size_t      pos;

	pos = 0;
	tmp = head->next;
	while (tmp != head)
	{
		if (*get_int(tmp) ==  val)
			return (pos);
		++pos;
		tmp = tmp->next;
	}
	return (-1);
}
