

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int			ft_ps_exec_rr(t_lst *lst_head)
{
	if (JUST_HEAD_P(lst_head))
		return (0);
	else
	{
		ft_lstinsert_before(ft_lstdisconnect(lst_head->prev), lst_head->next);
	}
	return (1);
}
