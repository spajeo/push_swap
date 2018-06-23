
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst       *ft_getlst_maxval(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst		*tmp;
	t_lst		*ret;
	
	if (!head || head->next == head)
		return (0);
	
	tmp = head->next;
	ret = head->next;
	while (tmp != head)
	{
		if (*get_int(tmp) > *get_int(ret))
		{
			ret = tmp;
		}
		tmp = tmp->next;
	}
	return (ret);
}
