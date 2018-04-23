
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3b() {
	if (P_DATA(HB_A_) > P_DATA(HB_C_) && P_DATA(HB_A_) < P_DATA(HB_B_))
		ft_ps_operations("sb");
	if (P_DATA(HB_A_) > P_DATA(HB_C_) && P_DATA(HB_A_) > P_DATA(HB_B_)) {
		ft_ps_operations("rb");
		ft_ps_operations("sb");
		ft_ps_operations("rrb");
	}
//		if (ft_is_lst_asc(&HEAD_LA, &ft_get_tpile_data)) //pour 21 et autres
//		{
//			ft_ps_operations("sb");
}

void ft_ps_order_3a()
{
	if (P_DATA(HA_A_) > P_DATA(HA_B_) && P_DATA(HA_B_) < P_DATA(HA_C_)
	                                    && P_DATA(HA_A_) < P_DATA(HA_C_))
		ft_ps_operations("sa");
	else if (ft_islst_desclim(&HEAD_LA, &ft_get_tpile_data, 3))
	{
		ft_ps_operations("sa");
		ft_ps_operations("ra");
		ft_ps_operations("sa");
		ft_ps_operations("rra");
		ft_ps_operations("sa");
	}
	else if (P_DATA(HA_A_) < P_DATA(HA_B_) && P_DATA(HA_A_) < P_DATA(HA_C_))
	{ // 1 3 2
		ft_ps_operations("ra");
		ft_ps_operations("sa");
		ft_ps_operations("rra");
	}
	else if (P_DATA(HA_A_) < P_DATA(HA_B_) && P_DATA(HA_B_) > P_DATA(HA_C_))
	{ // 2 3 1
		ft_ps_operations("ra");
		ft_ps_operations("sa");
		ft_ps_operations("rra");
		ft_ps_operations("sa");
	}
	else if (P_DATA(HA_A_) > P_DATA(HA_B_) && P_DATA(HA_B_) < P_DATA(HA_C_)
	         && P_DATA(HA_A_) > P_DATA(HA_C_)) //3 1 2
	{
		ft_ps_operations("sa");
		ft_ps_operations("ra");
		ft_ps_operations("sa");
		ft_ps_operations("rra");
	}
}
void ft_ps_order(int pile, int depth)
{
	if (depth == 2)
	{
		if (pile == _PA_ && P_DATA(HA_A_) < P_DATA(HA_B_))
			ft_ps_operations("sa");
		if (pile == _PB_ && P_DATA(HB_A_) > P_DATA(HB_B_))
			ft_ps_operations("sb");
	}
	else
	{
		if (pile == _PB_ &&
		        !ft_islst_desclim
				        (&HEAD_LA, &ft_get_tpile_data, depth))
			ft_ps_order_3a();
		else if (pile == _PA_ &&
				!ft_is_lst_asclim
						(&HEAD_LB, &ft_get_tpile_data, depth))
			ft_ps_order_3b();
	}
	return;
}