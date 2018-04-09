/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_data_in.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:20:59 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
**
** This function allows me to check wether a value an int value 
**					is contained in any list
**	
** (*get_struct_el) are functions allowing to call any int value 
**						from t_lst address
**
*/


int ft_is_data_in(t_lst *head, int data, int *(*get_struct_el)(t_lst *))
{
	t_lst	*tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (*get_struct_el(tmp) == data)
		{
			return (1);
		}
		tmp = tmp->next;	
	}
	return (0);
}
