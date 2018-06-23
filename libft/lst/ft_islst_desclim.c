

/*
**
**  MAX MIN
** COMMENT !
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
	if (head == tmp || head->prev == tmp)
        return (0);
	while (tmp != head->prev && lim > 1)
	{
		if (*get_int(tmp) < *get_int(tmp->next))
			return (0);
		tmp = tmp->next;
		--lim;
	}
	return (1);
}
