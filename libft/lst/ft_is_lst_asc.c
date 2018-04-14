/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lst_asc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:45:27 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"
/*
**
**
** //ft_IS LST INT
**  ASC
**
**
**
*/


int		ft_is_lst_asc(t_lst *head, int *(*get_int)(t_lst *))
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
