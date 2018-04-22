
#include "libft.h"
#include "push_swap.h"


int		ft_ps_opr(char *src)
{
	int done;

	done = 0;
	if (!ft_strcmp(src, "ra"))
	{
//		 		ft_ps_print();
		if (ft_ps_exec_r(&HEAD_LA))
			ft_add_tstr_next(&HEAD_PS_MV, src);
//		ft_ps_print();
		return (1);
	}
	else if (!ft_strcmp(src, "rb"))
	{
		if (ft_ps_exec_r(&HEAD_LB))
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else if (!ft_strcmp(src, "rr"))
	{
		if (ft_ps_exec_r(&HEAD_LA))
			done = 1;   // ???
		if (ft_ps_exec_r(&HEAD_LB) || done == 1)
			ft_add_tstr_next(&HEAD_PS_MV, src);
		return (1);
	}
	else
	EXIT_FAIL("Wrong Instruction");
}

