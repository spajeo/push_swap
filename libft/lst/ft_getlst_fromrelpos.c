
/*
 *     Return the t_lst of a struc
 *     from a given RELATIVE POSITION
 *     0 - indexing
 *
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromrelpos(t_lst *head, int*(*get_int)(t_lst *), size_t rel_pos)
{
    int         min_val;
    t_lst       *tmp;
	
	if (!head || (head->next == head))
		return (0);
    min_val = *get_int(ft_getlst_smallerval(head, &(*get_int), 0,0));
   min_val = 0;
   
    while (rel_pos > 0)
    {
        tmp = ft_getlst_smallerval(head, &(*get_int), min_val,1);
        min_val = *get_int(tmp);
        --rel_pos;
    }
	
    return (tmp);
}

