/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_t_pile_next.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:00:40 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

t_pile                  *ft_add_t_pile_next(t_lst *head, const int nb)
{
	t_pile  *new;

	if (!(new = (t_pile *)malloc(sizeof(t_pile))))
		EXIT_FAIL("Failed memory allocation");

	ft_lst_add_before(&new->lst, head);
	new->data = nb;
	new->position = 0;
	return (new);
}
