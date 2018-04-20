
#include "libft.h"
#include "push_swap.h"

int				ft_ps_operations(char *src)
{
	if (*src == 's')
	{
		ft_ps_ops(src);
	}
	else if (*src == 'p')
	{
		ft_ps_opp(src);
	}
	else if (*(src + 1) == 'r')
	{
		ft_ps_oprr(src);
	}
	else if (*src == 'r')
	{
		ft_ps_opr(src);
	}
	else
	{
		EXIT_FAIL("Wrong Instruction");
	}
	return (1);
}

