

/*
 *     Return the absolute position of the struct
 *     from a given variable
 *     0 - indexing
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromrelpos(t_lst *head, int*(*get_int)(t_lst *),
                                                    size_t rel_pos)
{
	t_lst		*tmp;
	size_t      rel_pos;

	tmp = head->next;
	while (rel_pos && tmp != head)
	{
		if (*get_int(tmp) =<  ft_getval_fromrelpos(tmp, get_int))
			--rel_pos;
		tmp = tmp->next;
	}
	if (rel_pos == 0)
		return ((tmp->prev));
	else
		return (0);
}
