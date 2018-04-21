
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

t_lst   *ft_getlst_fromrelpos(t_lst *head, int*(*get_int)(t_lst *), size_t rel_pos)
{
    int         min_val;
    t_lst       *tmp;

    min_val = *get_int(ft_getlst_smallerval(head, &(*get_int), 0,0));
//    min_val = 10000;
    tmp = head->next;
    while (rel_pos > 0)
    {
//        min_val = *get_int(tmp);
        ft_printf("MIN VAL %d\n", min_val);
        min_val = *get_int(ft_getlst_smallerval(head, &(*get_int), min_val,1));
//        tmp = ft_getlst_smallerval(head, (*get_int), min_val,1);
        --rel_pos;
    }
    return (tmp);
}

