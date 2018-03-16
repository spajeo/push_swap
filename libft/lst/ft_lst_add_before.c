/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_before.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 19:12:34 by spajeo            #+#    #+#             */
/*   Updated: 2017/10/28 00:28:56 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"
#include "unistd.h"
#include "stdio.h"
#include "libft.h"
//#include "push_swap.h"

/*
**
** Adds a node BEFORE the given list's node
** IF HEAD is 2nd parameter adds a node to the end of its list
**
** 1st parameter : new node
** 2nd parameter : destination node
**
*/

void			ft_lst_add_before(t_lst *new, t_lst *dst)
{
		new->prev = dst->prev;
		new->next = dst;
		dst->prev->next = new;
		dst->prev = new;
}

