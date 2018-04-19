

/*
 *     Return the absolute position of the struct
 *     from a given variable
 *     0 - indexing
 */

//int	ft_getrelpos_fromlstval(t_lst *head, int *(* get_int)(t_lst *), t_lst *ref)
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromrelpos(t_lst *head, int*(*get_int)(t_lst *),
                                                    size_t rel_pos)
{
	size_t      rpos;
	t_lst		*tmp;
	t_lst		*tmp2;

	rpos = rel_pos;
	tmp = head->next;
	while (rel_pos && tmp != head)
	{
		if (*get_int(tmp) == ft_getval_fromabspos(head,))
			retun(tmp)
		tmp = tmp->next;
	}
	return (-1);
}
//xt;
//		while (tmp2 != head)
//		{
//			if (*get_int(tmp) <= val);
				++rel_pos;
//			tmp2 = tmp2->next;
//		}
