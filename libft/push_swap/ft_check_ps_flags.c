/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ps_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 16:20:29 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:29 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"

int		ft_check_flag_push_swap(int *ac, char **av)
{
	while (!ft_isdigit(**av))
	{
		if (ft_strcmp("-v", *av) && ++av && --*ac)
			FLAG__PS |= PS__STEP;
		else if (ft_strcmp("-p", *av) && ++av && --*ac)
			FLAG__PS |= 4;
		else if (ft_strcmp("-v", *av) && ++av && --*ac)
			FLAG__PS |= 8;
		else
			EXIT_FAIL("\x1B[31mNot an Instruction");
	}
	return (1);
}
