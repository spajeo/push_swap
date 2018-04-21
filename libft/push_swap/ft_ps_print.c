
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void        ft_ps_print(void)
{
//    ft_print_next_str(&HEAD_PS_MV, ft_get_tstr_str);
    ft_printf(" ----------LA------------- \n");
    ft_print_next_int(&HEAD_LA, &ft_get_tpile_data);
    ft_printf("__________LB______________\n");
    ft_print_next_int(&HEAD_LB, &ft_get_tpile_data);
    ft_printf(" ----------------------- \n");
    TESTINTG("NB_MV",ft_lst_count(&HEAD_PS_MV));
}

