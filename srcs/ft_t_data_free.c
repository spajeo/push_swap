/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_data_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 15:07:18 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"
#include "../includes/push_swap.h"
#include "../libft/includes/liblst.h"

/*
**	Built for function with non-allocated head
*/

void		ft_t_data_free(t_lst *head)
{
	t_lst *tmp;

	tmp = head->next;
	if (JUST_HEAD_P(head))
	{
		return ;
	}
	while (tmp != head)
	{
		free(PILE(ft_lst_disconnect(tmp)));
		tmp = tmp->next;
	}
	return ;
}
