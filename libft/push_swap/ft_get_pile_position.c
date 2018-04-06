/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pile_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:29:46 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

/*
** Access space in the struct memory
** t_pile 
**{
**			int data;
** 	====>	int position;
**			t_lst ptr;
**}
*/


int		*ft_get_pile_position(t_lst *ptr) 
{
	return (&((t_pile *)((char *)(ptr)
						- ((char *)(&(((t_pile *)0))->lst))))->position);
}
