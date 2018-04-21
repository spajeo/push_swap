#include "libft.h"
#include "push_swap.h"

void     ft_lst_swap(t_lst *lst)
{
	ft_lstmv_after(lst, lst->next);
}