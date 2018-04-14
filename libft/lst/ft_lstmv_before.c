/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmv_before.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 00:11:12 by spajeo            #+#    #+#             */
/*   Updated: 2017/10/28 00:19:53 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

/*
**
** Separates a node and Adds it BEFORE the given node in its list
** If same list is 2nd parameter moves it within its list
**
** 1st parameter : node to isolate and move
** 2nd parameter : the list's node
**
*/

void    ft_lstmv_before(t_lst *src, t_lst *dst)
{
    ft_lst_disconnect(src);
    ft_lst_add_before(src, dst); //changes
}

