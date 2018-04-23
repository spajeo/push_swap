
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"


void ft_ps_order_3b()
{
	TESTINTB("HB_A_", P_DATA(HB_A_));
	TESTINTB("HB_B_", P_DATA(HB_B_));
	TESTINTB("HB_C_", P_DATA(HB_C_));
	if (P_DATA(HB_A_) < P_DATA(HB_B_) && P_DATA(HB_B_) < P_DATA(HB_C_)
	    && P_DATA(HB_A_) > P_DATA(HB_C_))
		ft_ps_operations("sb");
	else if (ft_islst_asclim(&HEAD_LA, &ft_get_tpile_data, 3))
	{
		ft_ps_operations("sb");
		ft_ps_operations("rb");
		ft_ps_operations("sb");
		ft_ps_operations("rrb");
		ft_ps_operations("sb");
	}
	else if (P_DATA(HB_A_) > P_DATA(HB_B_) && P_DATA(HB_A_) > P_DATA(HB_C_))
	{ // 1 3 2
		ft_ps_operations("rb");
		ft_ps_operations("sb");
		ft_ps_operations("rrb");
	}
	else if (P_DATA(HB_A_) > P_DATA(HB_B_) && P_DATA(HB_B_) < P_DATA(HB_C_))
	{ // 2 3 1
		ft_ps_operations("rb");
		ft_ps_operations("sb");
		ft_ps_operations("rrb");
		ft_ps_operations("sb");
	}
	else if (P_DATA(HB_A_) < P_DATA(HB_B_) && P_DATA(HB_B_) > P_DATA(HB_C_)
	         && P_DATA(HB_A_) > P_DATA(HB_C_)) //3 1 2
	{
		ft_ps_operations("sb");
		ft_ps_operations("rb");
		ft_ps_operations("sb");
		ft_ps_operations("rrb");
	}
}

void ft_ps_order_3a()
{
	TESTINTG("HA_A_", P_DATA(HB_A_));
	TESTINTG("HA_B_", P_DATA(HB_B_));
	TESTINTG("HA_C_", P_DATA(HB_C_));
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
		TESTINTR("SWAP HA", ft_getlstlen(&HEAD_LA));
		TESTINTR("SWAP HB", ft_getlstlen(&HEAD_LB));
		TESTSTR("_______", "__________");
		if (pile == _PA_ && P_DATA(HA_A_) < P_DATA(HA_B_))
			ft_ps_operations("sa");
		if (pile == _PB_ && P_DATA(HB_A_) > P_DATA(HB_B_))
			ft_ps_operations("sb");
	}
	else
	{
		if (pile == _PA_ && !ft_islst_desclim
				        (&HEAD_LA, &ft_get_tpile_data, depth))
		{
			ft_ps_order_3a();
//			exit(1);
			
		}
		else if (pile == _PB_ && !ft_islst_asclim
						(&HEAD_LB, &ft_get_tpile_data, depth)) {
			ft_ps_order_3b();
//			exit(1);
		}
	}
	return;
}