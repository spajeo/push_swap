
/*
 *     Return the absolute position of the struct
 *     from a given variable
 *     0 - indexing
 */


#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
 *                  IF INIT IS NULL => smaller_element is ignored
 */

t_lst       *ft_getlst_smallestval(t_lst *head, int *(*get_int)(t_lst *))
{
    t_lst		*tmp;
    t_lst		*ret;
    
    if (!head || head->next == head) // MACRO pour indiquer que tete pas init
        return (0);
    
    tmp = head->next;
    ret = head->next;
    while (tmp != head) // head
    {
        if (*get_int(tmp) < *get_int(ret))
        {
            ret = tmp;
        }
        tmp = tmp->next;
    }
    return (ret);
}

