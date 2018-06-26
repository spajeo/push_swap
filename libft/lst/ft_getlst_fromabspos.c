

/*
 *     Return the lst
 *     from a given ABSOLUTE position
 *     0 - indexing
 *
 *     returns 0 if absolute position > len list
 *     has to be protected in case it returns 0 and
 *     not a t_lst
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromabspos(t_lst *head, size_t abs_pos)
{
	t_lst		*tmp;

	tmp = head->next;

//	if (ft_getlstlen(head) <= abs_pos)
//		return 0;
	if (tmp == head)
		return 0;
	if (abs_pos == 0)
		return ((tmp));
	while (abs_pos && tmp != head)
	{
		--abs_pos;
		tmp = tmp->next;
	}
	if (abs_pos == 0)
		return ((tmp->prev));
	else
		return (0);
}
