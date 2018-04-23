/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tpile_data.c                                 :+:      :+:    :+:   */
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
/*
** Access space in struct s_pile aka t_str's memory
** t_pile
**
**{
** ====>	int         data;
**			t_lst lst;
**}
*/


int		*ft_get_tpile_data(t_lst *ptr)
{
	return (&((t_pile *)((char *)(ptr)
						- ((char *)(&(((t_pile *)0))->lst))))->data);
}
