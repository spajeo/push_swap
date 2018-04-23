

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

	tmp = head->next;
	while (tmp != head->prev)
	{
		if (*get_int(tmp) > *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
