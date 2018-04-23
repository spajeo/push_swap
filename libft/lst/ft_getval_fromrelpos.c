/*
 *     Return the absolute position of the struct
 *     from a given variable
 *     0 - indexing
 *
 *     // fuck the idiotic norm that doesn t let me use 'DO WIHLE'
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int   ft_getval_fromrelpos(t_lst *head, int*(*get_int)(t_lst *),
                                                    int rel_pos)

{
	t_lst *tmp;
	
	if (!head || (head->next == head))
		return (0);
	if (!get_int)
		return (0);
	tmp = ft_getlst_fromrelpos(head, (get_int), rel_pos);
	if (tmp == 0)
		return (0);
	int val = *get_int(tmp);
	return(val);
}
