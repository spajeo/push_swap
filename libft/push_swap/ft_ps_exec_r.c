#include "libft.h"
#include "push_swap.h"

int			ft_ps_exec_r(t_lst *lst_head)
{
	if (JUST_HEAD_P(lst_head))
		return (0);
	else
	{
		ft_lstinsert_after(ft_lstdisconnect(lst_head->next), lst_head->prev);
	}
	return (1);
}
