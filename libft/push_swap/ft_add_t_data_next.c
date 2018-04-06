/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_t_data_next.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 22:07:08 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"
#include "../includes/push_swap.h"
#include "../libft/includes/liblst.h"

/*
** Allocate a new node and add it to the end of Stack A
**
** 1st parameter : integer to sort
*/

t_data	*ft_add_t_data_next(t_lst *head, const int nb)
{
	t_data	*new;
	if (!(new = (t_data *)malloc(sizeof(t_data))))
		EXIT_FAIL("Failed memory allocation");

	ft_lst_add_before(&new->lst, head);
	new->data = nb;

	return (new);
}
