

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"
/*
**
**
** //ft_IS LST INT
**  ASC
**
**
**
*/


int		ft_islst_asc(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst *tmp;
// securiser ! head and 2 values in the list at least



	tmp = head->next->next;
	while (tmp != head)
	{
		if (*get_int(tmp->prev) > *get_int(tmp))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
