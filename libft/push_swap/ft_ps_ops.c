
#include "libft.h"
#include "push_swap.h"

int		ft_ps_ops(char *src)
{
	int done;

	done = 0;
	if (!ft_strcmp(src, "sa"))
	{
		if (ft_ps_exec_s(&HEAD_LA))
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "sb"))
	{
		if (ft_ps_exec_s(&HEAD_LB))
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "ss"))
	{
		if (ft_ps_exec_s(&HEAD_LA))
			done = 1;
		if (ft_ps_exec_s(&HEAD_LB) || done == 1)
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
	EXIT_FAIL("Wrong Instruction");
}
