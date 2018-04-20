
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

t_lst       *ft_getlst_smallerval(t_lst *head, int *(*get_int)(t_lst *), int min_elem, int init)
{
    t_lst		*tmp;
    t_lst		*ret;

    if (!head || head->next == head)
        return (0);
    tmp = head->next;
    ret = head->next;

    while (init != 0 && ret != head)
    {
        if (*get_int(ret) < min_elem)
        {
            ft_printf("LST_SMALLER VAL %d\n", *get_int(ret));
            break;
        }
 
        ret = ret->next;
    }
    while (tmp != head)
    {
        if ((init == 0 || *get_int(tmp) > min_elem) && *get_int(tmp) < *get_int(ret))
            ret = tmp;
        tmp = tmp->next;
    }
    return (ret);
}
