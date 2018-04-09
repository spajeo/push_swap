/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_ac_parse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 17:45:03 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:45 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void			ft_exec_parse_sp(char *str, void (*f)(const char *))
{
	int i;

	i = 0;
	if (!str || !*str || !f)
	{
		return ;
	}
	while (*(str + i))
	{
		if (!ft_isspace(*(str + i)) && (i == 0 || ft_isspace(*(str + i - 1))))
			f((const char *)str + i);
		++(i);
	}
	return; 
}
