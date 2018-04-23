

/*
**
**  MAX MIN
** //ft_IS LST INT
**
**
**
**
*/



#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int		ft_islst_desc(t_lst *head, int *(*get_int)(t_lst *))
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head->prev)
	{
		if (*get_int(tmp) < *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
