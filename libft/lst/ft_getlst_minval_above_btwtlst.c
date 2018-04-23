
/*
 *     Return the absolute position of the struct
 *     from a given variable
 *     0 - indexing
 */


#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
 *
 */


t_lst       *ft_getlst_minval_above_btwtlst(t_lst *head, t_lst *start,
                                              t_lst *end,
                                    int *(*get_int)(t_lst *), int min_elem)
{
    t_lst		*tmp;
    t_lst		*ret;
    int min ;
    
    
    // securite pour verifier pas de head in btw avec les abspositions;
    
    if (!start || (start->next == start))
        return (0);
    if (!end || (end->prev == end))
        return (0);
    if (!head || (head->next == head))
        return (0);
    if (!head || head->next == head) // MACRO pour indiquer que tete pas init
        return (0);
    tmp = start->next;
    ret = ft_getlst_maxval(head, &(*get_int));
    while (tmp != head && tmp != end) // head
    {
        if (min_elem < *get_int(tmp) && *get_int(tmp) < *get_int(ret))
        {
            ret = tmp;
            min = P_DATA(ret);
        }
        tmp = tmp->next;
    }
    return (ret);
}
