
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3b() // Descending Order
{
	if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data) && ft_getlstlen(&HEAD_LA) > 2)
	{
		if (P_DATA(HB_A_) > P_DATA(HB_C_) && P_DATA(HB_A_) < P_DATA(HB_B_))
			ft_ps_operations("sb");
		if (P_DATA(HB_A_) > P_DATA(HB_C_) && P_DATA(HB_A_) > P_DATA(HB_B_))
		{
			ft_ps_operations("sb");
			ft_ps_operations("rb");
		}
		if (ft_is_lst_asc(&HEAD_LA, &ft_get_tpile_data)) //pour 21 et autres
		{
			ft_ps_operations("sb");
			ft_ps_operations("rrb");
		}
		if (P_DATA(HB_A_) < P_DATA(HB_B_) && P_DATA(HB_B_) > P_DATA(HB_C_))
			ft_ps_operations("rb");
		if (P_DATA(HB_A_) < P_DATA(HB_C_))
			ft_ps_operations("rrb");
	}
	else if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data))
		ft_ps_operations("sb");
}