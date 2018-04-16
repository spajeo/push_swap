#include "libft.h"
#include "push_swap.h"


int		ft_ps_opp(char *src)
{
	if (!ft_strcmp(src, "pa"))
	{
		if (ft_ps_exec_p(&HEAD_LA, &HEAD_LB))
		{
			ft_add_tstr_next(&HEAD_PS_MV, src);
		}
		return (1);
	}
	else if (!ft_strcmp(src, "pb"))
	{
		if (ft_ps_exec_p(&HEAD_LB, &HEAD_LA))
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
	EXIT_FAIL("Wrong Instruction");
}
