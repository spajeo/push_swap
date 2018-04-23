
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


t_lst       *ft_getlst_smallerval_above(t_lst *head, int *(*get_int)(t_lst *), int min_elem)
{
    t_lst		*tmp;
    t_lst		*ret;
    int min ;

    if (!head || head->next == head) // MACRO pour indiquer que tete pas init
        return (0);

    tmp = head->next;
    ret = head->next;
    while (ret != head)
    {
        if (*get_int(ret) > min_elem)
        {
            tmp = ret;
            TESTINTM("LST_SMALLER VAL_______ \n", *get_int(ret));
            min = *get_int(ret);
            break;
        }
        ret = ret->next;
    }
    if (ret == head)
        ret = ret->prev;
    while (tmp != head->prev) // head
    {
        if (*get_int(ret) > *get_int(tmp))
        {
            ret = tmp;
            min = P_DATA(ret);
            if (*get_int(tmp) > min_elem)
            {
    
                TESTINTR("LST_SMALLER VAL_______ \n", *get_int(ret));
            }
        }
        tmp = tmp->next;
    }
    return (ret);
}
