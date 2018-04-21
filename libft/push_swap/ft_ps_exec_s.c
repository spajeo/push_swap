

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int inline	ft_ps_exec_s(t_lst *head)
{
	if (JUST_HEAD_P(head))
		return (0);
//	else if (head->next == head->prev)
//		return (0);
	else if (head->next != head->prev)
	{
		ft_lstmv_after(head->next, head->next->next);
	}
	return (1);
}