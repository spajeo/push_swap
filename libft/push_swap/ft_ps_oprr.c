


#include "libft.h"
#include "push_swap.h"

int		ft_ps_oprr(char *src)
{
	int done;

	done = 0;
	if (!ft_strcmp(src, "rra"))
	{
		if (ft_ps_exec_rr(&HEAD_LA))
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rrb"))
	{
		if (ft_ps_exec_rr(&HEAD_LB))
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rrr"))
	{
		if (ft_ps_exec_rr(&HEAD_LA))
			done = 1;
		if (ft_ps_exec_rr(&HEAD_LB) || done == 1)
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
		EXIT_FAIL("Wrong Instruction");
}
