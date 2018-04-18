#include "libft.h"
#include "push_swap.h"
#include "liblst.h"

void		ft_ps_convert_argv(const char *s)
{
	int val;
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
		val = ft_atoi_exit((const char *)s);
		if (!ft_is_val_in
				(&HEAD_LA, val, &ft_get_tpile_data))
		{
			ft_add_tpile_next(&HEAD_LA, val);
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
