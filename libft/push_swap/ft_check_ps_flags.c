/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ps_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 16:20:29 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/ft_printf.h"
#include "../includes/push_swap.h"
#include "../libft/includes/liblst.h"

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
