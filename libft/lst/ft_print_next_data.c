/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_next_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 22:13:16 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"

//rendre la fonction plus flexible en mettant une fonction de lecture.

void	ft_print_next_int(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		ft_printf("|%12d%12|\n", *get_int(tmp));
		tmp = tmp->next;
	}
	return ;
}