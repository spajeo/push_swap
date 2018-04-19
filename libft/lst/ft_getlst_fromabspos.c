

/*
 *     Return the lst
 *     from a given ABSOLUTE position
 *     0 - indexing
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromabspos(t_lst *head, size_t rel_pos)
{
	t_lst		*tmp;

	tmp = head->next;
	while (rel_pos && tmp != head)
	{
		--rel_pos;
		tmp = tmp->next;
	}
	if (rel_pos == 0)
		return ((tmp->prev));
	else
		return (0);
}
