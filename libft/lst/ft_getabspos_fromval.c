/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getabspos_fromval.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:49:34 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int	ft_getabspos_fromval(t_lst *head, int*(*get_int)(t_lst *), int val)
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
