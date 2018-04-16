

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int inline	ft_ps_exec_s(t_lst *head)
{
	if (JUST_HEAD_P(head))
		return (0);
	else if (head->next == head->prev)
		return (0);
	else
	{
		ft_swap((ssize_t *)&PILE(head->next)->data,
		        (ssize_t *)&PILE(head->next->next)->data);
	}
	return (1);
}