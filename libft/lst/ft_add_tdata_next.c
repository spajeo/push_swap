/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tdata_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 22:07:08 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:19 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"

/*
** Allocate a new node and add it to the end of Stack A
**
** 1st parameter : integer to sort
*/

t_data	*ft_add_tdata_next(t_lst *head, const int nb)
{
	t_data	*new;
	if (!(new = (t_data *)malloc(sizeof(t_data))))
		EXIT_FAIL("Failed memory allocation");

	ft_lstinsert_before(&new->lst, head);
	new->data = nb;

	return (new);
}
