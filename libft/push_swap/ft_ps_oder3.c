
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3b() // Descending Order
{
	if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data) && ft_getlstlen(&HEAD_LA) > 2)
	{
		if (P_DATA(HA_A_) > P_DATA(HA_C_) && P_DATA(HA_A_) < P_DATA(HA_B_))
			ft_ps_operations("sa");
		if (P_DATA(HA_A_) > P_DATA(HA_C_) && P_DATA(HA_A_) > P_DATA(HA_B_))
		{
			ft_ps_operations("sa");
			ft_ps_operations("ra");
		}
		if (ft_is_lst_asc(&HEAD_LA, &ft_get_tpile_data)) //pour 21 et autres
		{
			ft_ps_operations("sa");
			ft_ps_operations("rra");
		}
		if (P_DATA(HA_A_) < P_DATA(HA_B_) && P_DATA(HA_B_) > P_DATA(HA_C_))
			ft_ps_operations("ra");
		if (P_DATA(HA_A_) < P_DATA(HA_C_))
			ft_ps_operations("rra");
	}
	else if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data))
		ft_ps_operations("sa");
}