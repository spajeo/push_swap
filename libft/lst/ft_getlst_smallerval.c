
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
    int min ;

    if (!head || head->next == head) // MACRO pour indiquer que tete pas init
        return (0);

    tmp = head->next;
    ret = head->next;
    while (init == 1 && ret != head)
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
        if (*get_int(ret) > *get_int(tmp) && )
            ret = tmp;
	    min = P_DATA(ret);
	    if (init == 0 || *get_int(tmp) > min_elem)
//	    min = *get_int(ret);
        TESTINTR("LST_SMALLER VAL_______ \n", *get_int(ret));
        tmp = tmp->next;
    }
    return (ret);
}
