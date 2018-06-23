/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tdata_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:35:33 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Access space in struct s_pile aka t_str's memory
** t_data
**
**{
** ====>	int         	data;
**		t_lst		lst;
**}
*/

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int		*ft_get_tdata_data(t_lst *ptr)
{
	return (&((t_data *)((char *)(ptr) 
			     - ((char *)(&(((t_data *)0))->lst))))->data);
}
