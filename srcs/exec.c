/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 14:26:38 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/16 18:00:44 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "push_swap.h"
#include <stdlib.h>

int inline	ft_exec_s(t_lst *head)
{
	if (JUST_HEAD_P(head))
		return (0);
	else if (head->next == head->prev)
		return (0);
	else
	{
		ft_swap((ssize_t *)&PILE(head->next)->data,
				(ssize_t *)&PILE(head->next->next)->data);
	}
	return (1);
}

int			ft_exec_p(t_lst *lst_a, t_lst *lst_b)
{
	if (JUST_HEAD_P(lst_a))
{
		TESTINT("EXIST OUT OF SCOPE", 0);
		//exit(0);
		return (0);
}
	else
	{
		ft_lst_add_after(ft_lst_disconnect(lst_a->next), lst_b);
	}
	return (1);
}

int			ft_exec_r(t_lst *lst_head)
{
	if (JUST_HEAD_P(lst_head))
		return (0);
	else
	{
		ft_lst_add_after(ft_lst_disconnect(lst_head->next), lst_head->prev);
	}
	return (1);
}

int			ft_exec_rr(t_lst *lst_head)
{
	if (JUST_HEAD_P(lst_head))
		return (0);
	else
	{
		ft_lst_add_before(ft_lst_disconnect(lst_head->prev), lst_head->next);
	}
	return (1);
}
