#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

void        ft_print_stack_a_and_b(void)
{
    ft_print_next_str(&HEAD_PS_MV);
    ft_printf(" ----------LA------------- \n");
    ft_print_next_int(&HEAD_LA, &ft_get_pile_data);
    ft_printf("__________LB______________\n");
    ft_print_next_int(&HEAD_LB, &ft_get_pile_data);
    ft_printf(" ----------------------- \n");
    TESTINTG("NB_MV",ft_lst_count(&HEAD_PS_MV));
}

