
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


t_lst       *ft_getlst_minval_above(t_lst *head, int *(*get_int)(t_lst *), int min_elem)
{
    t_lst		*tmp;
    t_lst		*ret;
    int min ;

    if (!head || head->next == head) // MACRO pour indiquer que tete pas init
        return (0);

    tmp = head->next;
    ret = ft_getlst_maxval(head, &(*get_int));
    while (tmp != head->prev) // head
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
