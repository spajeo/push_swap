/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:18:18 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:54 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void		ft_check_instruct(void)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) > 0 && ft_strcmp("", line))
	{
		ft_pushswap_operation(line);
		if ((FLAG__PS & PS__MOVE))
			ft_printf("\x1B[31m%12s\x1B[0m\n", line);
		if ((FLAG__PS & PS__STEP))
			ft_print_stack_a_and_b();
		free(line);
	}
	if (line)
	{
		free(line);
	}
}

void		ft_convert_argv(const char *s)
{
	if (!ft_strcmp("-v", s))
	{
		FLAG__PS |= PS__STEP;
	}
	else if (!ft_strcmp("-m", s))
	{
		FLAG__PS |= PS__MOVE;
	}
	else if (ft_isdigit(*s) || ft_issign(*s))
	{
		if (!ft_is_data_in(&HEAD_LA,
				ft_atoi_exit((const char *)s), &ft_get_pile_data))
		{
			ft_add_t_pile_next(&HEAD_LA, ft_atoi_exit((const char *)s));
		}
		else
		{
			EXIT_FAIL("\x1B[31mError (duplicated elements)");
		}
	}
	else
	{
		EXIT_FAIL("\x1B[31mError Wrong Instruction");
	}
}
