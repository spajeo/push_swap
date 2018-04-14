/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tstr_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 15:51:07 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:26 by spajeo           ###   ########.fr       */
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

void            *ft_add_tstr_next(t_lst *head, char *str)
{
   	t_str			*new;

	if (!(new = (t_str *)ft_memalloc(sizeof(t_str))))
		EXIT_FAIL("Failed memory allocation");
	ft_lstinsert_before(&new->lst, head);
	new->str = ft_strdup(str);
ft_print_next_str(&HEAD_PS_MV, &ft_get_tstr_str );
	return (new);
}
