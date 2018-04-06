/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_next_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 14:55:44 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"
#include "../includes/push_swap.h"
#include "../libft/includes/liblst.h"

void	ft_free_next_data(t_lst *head)
{
	if (JUST_HEAD_P(head))
	{
		return ;
	}
	while (head && !JUST_HEAD_P(head))
	{
		free(T_DATA(ft_lst_disconnect(head->next)));
	}
	return ;
}
