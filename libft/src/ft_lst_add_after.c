/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_after.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 14:57:34 by spajeo            #+#    #+#             */
/*   Updated: 2017/10/24 19:56:14 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

/*
 **
 ** Adds a node AFTER the given list's node
 ** IF HEAD is 2nd parameter adds a node to the second position
 ** IF QUEUE is 2nd parameter adds a node to the begining of its list
 **
 ** 1st parameter : new node
 ** 2nd parameter : destination node
 **
 */

void			ft_lst_add_after(t_lst *new, t_lst *dst)
{
	dst->next->prev = new;
	new->next = dst->next;
	new->prev = dst;
	dst->next = new;
}	
