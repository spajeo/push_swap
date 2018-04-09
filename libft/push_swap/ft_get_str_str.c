/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:37:07 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
** Access space in struct s_str aka t_str's memory
** t_str 
**{
** ====>	int str;
**			t_lst ptr;
**}
*/

char		*ft_get_str_str(t_lst *ptr)
{
	return (((t_str *)((char *)(ptr)
					- ((char *)(&(((t_pile *)0))->lst))))->str);
}
