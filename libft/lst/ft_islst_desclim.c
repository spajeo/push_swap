

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

int		ft_islst_desclim(t_lst *head, int *(*get_int)(t_lst *), size_t lim)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head->prev && lim > 1)
	{
		if (*get_int(tmp) < *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
		TESTINTB("tmp->next", *get_int(tmp->next));
		--lim;
	}
	return (1);
}
