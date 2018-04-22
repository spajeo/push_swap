
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3a()
{
	if (ft_getlstlen(&HEAD_LA) == 2)
		ft_ps_operations("sb");
	else
	{
		if (P_DATA(HB_A_) > P_DATA(HB_C_) && P_DATA(HB_A_) < P_DATA(HB_B_))
			ft_ps_operations("sb");
		if (P_DATA(HB_A_) > P_DATA(HB_C_) && P_DATA(HB_A_) > P_DATA(HB_B_))
		{
			ft_ps_operations("sb");
//			ft_ps_operations("rb");
		}
		if (ft_is_lst_asc(&HEAD_LA, &ft_get_tpile_data)) //pour 21 et autres
		{
			ft_ps_operations("sb");
//			ft_ps_operations("rrb");
		}
//		if (P_DATA(HB_A_) < P_DATA(HB_B_) && P_DATA(HB_B_) > P_DATA(HB_C_))
//			ft_ps_operations("rb");
//		if (P_DATA(HB_A_) < P_DATA(HB_C_))
//			ft_ps_operations("rrb");
	}
}
void ft_ps_order_3b()
{
	if (ft_getlstlen(&HEAD_LB) == 3)
	{
		if (P_DATA(HA_A_) < P_DATA(HA_C_) && P_DATA(HA_A_) > P_DATA(HA_B_))
			ft_ps_operations("sa");
		if (P_DATA(HA_A_) < P_DATA(HA_C_) && P_DATA(HA_A_) < P_DATA(HA_B_))
		{
			ft_ps_operations("sa");
//			ft_ps_operations("ra");
		}
		if (ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data)) //pour 21 et autres
		{
			ft_ps_operations("sa");
//			ft_ps_operations("rra");
		}
//		if (P_DATA(HA_A_) > P_DATA(HA_B_) && P_DATA(HA_B_) < P_DATA(HA_C_))
//			ft_ps_operations("ra");
//		if (P_DATA(HA_A_) > P_DATA(HA_C_))
//			ft_ps_operations("rra");
	}
	else if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data))
		ft_ps_operations("sa");
	ft_lst_convert_allvar(&HEAD_LA, ft_get_tpile_pos, 1);
}
