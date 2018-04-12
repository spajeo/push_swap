/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pile_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:28:15 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "liblst.h"
#include "push_swap.h"


/*
** Gives Acces {t_pile}
**          aka {struct s_pile data} element in the memory
*/

int		*ft_get_pile_data(t_lst *ptr) 
{
//ft_putnbr(((t_pile *)((char *)(ptr)
  //                     - ((char *)(&(((t_pile *)0))->lst))))->data);
	return (&((t_pile *)((char *)(ptr)
						- ((char *)(&(((t_pile *)0))->lst))))->data);
}
