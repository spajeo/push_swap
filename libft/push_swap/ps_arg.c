
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void		ft_check_instruct(void)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line) > 0 && ft_strcmp("", line))
	{
		ft_ps_pushswap_operation(line);
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
