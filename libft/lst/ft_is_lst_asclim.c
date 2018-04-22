

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

int		ft_is_lst_asclim(t_lst *head, int *(*get_int)(t_lst *), size_t lim)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head->prev && lim > 0)
	{
		if (*get_int(tmp) > *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
		--lim;
	}
	return (1);
}
