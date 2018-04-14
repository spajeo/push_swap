/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getval_fromlst_abspos.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 03:47:09 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"


/*
**
**
** int	*ft_getval_fromabspos(t_lst *head, int*(*get_int)(t_lst *), size_t position)
** OBTAINS THE NTH VALUE REGARDING THE VALUE NOT THE POSITION
**
** returns the **ADDRESS** of the value
*/


int	ft_getval_fromlst_abspos(t_lst *head, int *(* get_int)(t_lst *), size_t position)
{
	t_lst		*tmp;
	t_lst		*test;
	size_t      inferior;

	inferior = 0;
	tmp = head->next;
	while (tmp != head) // head->prev
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
