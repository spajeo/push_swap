/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_next_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:22:00 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:54 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"
/*
**
**
**
**
**
*/

void	ft_print_next_str(t_lst *head, char *(*get_str)(t_lst *))
{
	t_lst *tmp;
	tmp = head->next;
//	char * data = NULL;

	while (tmp != head)
	{
//		data = get_str(tmp);
		ft_printf("test %s\n", *(const char **)get_str(tmp));
		tmp = tmp->next;
	}


    return ;
}
