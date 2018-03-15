/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_disconnect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:54:34 by spajeo            #+#    #+#             */
/*   Updated: 2017/10/05 19:10:08 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"
#include <unistd.h>
#include <stdio.h>

/*
** Disconnects a node from a list
** and set its next and prev pointers towards itself
**
** 1st parameter : node to disconnect
*/

t_lst    *ft_lst_disconnect (t_lst *src)
{
    src->prev->next = src->next;
    src->next->prev = src->prev;
	src->next = src;
    src->prev = src;

	return(src);
}
