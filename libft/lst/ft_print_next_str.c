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
** //ft_IS LST INT
**
**  NORM
**
**
*/


void	ft_print_next_str(t_lst *head, char *(*get_str)(t_lst *))
{
	t_lst *tmp;
//int data;
	tmp = head->next;
	while (tmp != head)
	{
//		data = *get_str(tmp);
//		data = data*1;
//		ft_putendl((const char *)get_str(tmp));
//		ft_printf("%s\n", *get_str(tmp));
		printf("%s\n", get_str(tmp));
		tmp = tmp->next;
	}
	return ;
}
