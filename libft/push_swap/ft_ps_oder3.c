
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3b()
{
//ascending order
    int len = ft_getlstlen(&HEAD_LB);
    if (!ft_is_lst_asc(&HEAD_LB, &ft_get_tpile_data) && len > 2)
    {
        if (*ft_get_tpile_data(HEAD_LB.next) < *ft_get_tpile_data(HEAD_LB.prev)) //pour 21 et autres
            ft_ps_opr("sb");
	    if (*ft_get_tpile_data(HEAD_LB.next) > *ft_get_tpile_data(HEAD_LB.next->next))
		    ft_ps_opr("rb");
        if (*ft_get_tpile_data(HEAD_LB.next) > *ft_get_tpile_data(HEAD_LB.next->next))
            ft_ps_opr("sb");
	    if (*ft_get_tpile_data(HEAD_LA.next) > *ft_get_tpile_data(HEAD_LA.next->prev))
		    ft_ps_opr("rrb");
    }
    ft_lst_convert_allvar(&HEAD_LB, &ft_get_tpile_data, 2); //flag
    ft_refill_a(len);
    while (len--)
        ft_ps_opr("ra");
}
