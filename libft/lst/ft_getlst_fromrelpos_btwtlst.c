
/*
 *     Return the t_lst of a struc
 *     from a given RELATIVE POSITION
 *     0 - indexing
 *
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromrelpos_btwtlst(t_lst *head, t_lst *start, t_lst *end,
                                        int*(*get_int)(t_lst *), int rel_pos)
{
    int         min_val;
    t_lst       *tmp;

    // securite pour verifier pas de head in btw avec les abspositions;
	
	if (!start || (start->next == start))
		return (0);
	if (!end || (end->prev == end))
		return (0);
	if (!head || (head->next == head))
		return (0);
	tmp = ft_getlst_minval(head, &(*get_int));
	--rel_pos;
	while (rel_pos > 0)
    {
        tmp = ft_getlst_minval_above_btwtlst(head, start, end,
												   &(*get_int), min_val);
	    min_val = *get_int(tmp);
        --rel_pos;
    }
    return (tmp);
}

