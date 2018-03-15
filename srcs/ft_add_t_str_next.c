/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_t_str_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 15:51:07 by spajeo            #+#    #+#             */
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

void            *ft_add_t_str_next(t_lst *head, char *str)
{
   	t_str			*new;

	if (!(new = (t_str *)ft_memalloc(sizeof(t_str))))
		EXIT_FAIL("Failed memory allocation");
	ft_lst_add_before(&new->lst, head);
	new->str = ft_strdup(str);
//ft_print_next_str(&HEAD_PS_MV);
	return (new);
}
