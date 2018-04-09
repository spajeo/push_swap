/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_t_data_issorted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 15:30:27 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"
// change to t_lst system
int	ft_next_t_data_issorted(t_lst *head_a, t_lst *head_b)
{
	if (!ft_lst_is_min_max_sorted(head_a, &ft_get_pile_data))
		return (0);
	if (!ft_lst_is_max_min_sorted(head_b, &ft_get_pile_data))
		return (0);
	if (!(JUST_HEAD_P(head_a)) && !(JUST_HEAD_P(head_b))
			&& PILE(head_a)->data > PILE(head_b)->data)
		return (0);
	return (1);
}
