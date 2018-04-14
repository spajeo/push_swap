/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lst_desc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:45:14 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**
**  MAX MIN
** //ft_IS LST INT
**
**
**
**
*/



#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int		ft_is_lst_desc(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head->prev)
	{
		if (*get_int(tmp) < *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
