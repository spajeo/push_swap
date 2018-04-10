/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_operation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 00:12:42 by spajeo            #+#    #+#             */
/*   Updated: 2018/04/09 14:54:54 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int		ft_pushwap_ops(char *src)
{
	int done;

	done = 0;
	if (!ft_strcmp(src, "sa"))
	{
		if (ft_ps_exec_s(&HEAD_LA))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "sb"))
	{
		if (ft_ps_exec_s(&HEAD_LB))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "ss"))
	{
		if (ft_ps_exec_s(&HEAD_LA))
			done = 1;
		if (ft_ps_exec_s(&HEAD_LB) || done == 1)
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
		EXIT_FAIL("Wrong Instruction");
}

static int		ft_pushwap_opp(char *src)
{
	if (!ft_strcmp(src, "pa"))
	{
		if (ft_ps_exec_p(&HEAD_LA, &HEAD_LB))
		{
			ft_add_t_str_next(&HEAD_PS_MV, src);
		}
		return (1);
	}
	else if (!ft_strcmp(src, "pb"))
	{
		if (ft_ps_exec_p(&HEAD_LB, &HEAD_LA))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
		EXIT_FAIL("Wrong Instruction");
}

static int		ft_pushwap_opr(char *src)
{
	int done;

	done = 0;
	if (!ft_strcmp(src, "ra"))
	{
		if (ft_ps_exec_r(&HEAD_LA))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rb"))
	{
		if (ft_ps_exec_r(&HEAD_LB))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rr"))
	{
		if (ft_ps_exec_r(&HEAD_LA))
			done = 1;
		if (ft_ps_exec_r(&HEAD_LB) || done == 1)
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
		EXIT_FAIL("Wrong Instruction");
}

static int		ft_pushwap_oprr(char *src)
{
	int done;

	done = 0;
	if (!ft_strcmp(src, "rra"))
	{
		if (ft_ps_exec_rr(&HEAD_LA))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rrb"))
	{
		if (ft_ps_exec_rr(&HEAD_LB))
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rrr"))
	{
		if (ft_ps_exec_rr(&HEAD_LA))
			done = 1;
		if (ft_ps_exec_rr(&HEAD_LB) || done == 1)
			ft_add_t_str_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
		EXIT_FAIL("Wrong Instruction");
}

int				ft_pushswap_operation(char *src)
{
	if (*src == 's')
	{
		ft_pushwap_ops(src);
	}
	else if (*src == 'p')
	{
		ft_pushwap_opp(src);
	}
	else if (ft_strlen(src) == 3)
	{
		ft_pushwap_oprr(src);
	}
	else if (*src == 'r')
	{
		ft_pushwap_opr(src);
	}
	else
	{
		EXIT_FAIL("Wrong Instruction");
	}
	return (1);
}
