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
                                                    size_t rel_pos)
{
		return(*get_int(ft_getlst_fromrelpos(head, &(* get_int), rel_pos)));
}
