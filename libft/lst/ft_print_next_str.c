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


void	ft_print_next_str(t_lst *head)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		ft_printf("%s\n", T_STR(tmp)->str);
		tmp = tmp->next;
	}
	return ;
}
