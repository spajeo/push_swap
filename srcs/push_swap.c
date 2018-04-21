/*   Created: 2017/10/9 14:9:48 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3a() // Descending Order
{
	if (ft_getlstlen(&HEAD_LA) == 3)
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

void ft_ps_push_ab_pivot(int val)
{
	int len = ft_getlstlen(&HEAD_LA);
	int data;
	
	while(len)
	{
		data = *ft_get_tpile_data(HEAD_LA.next);
		if (data <= val)
		{
			ft_ps_exec_p(&HEAD_LA, &HEAD_LB);
		}
		else if (data == val)
		{
			ft_printf("%d", ft_get_tpile_data(HEAD_LA.next));
//			ft_get_tpile_pos(&HEAD_LA.next) = FPS_ABSPOS;
		}
		else
			ft_ps_exec_rr(&HEAD_LA);
		--len;
	}
}



void ft_ps_getmedian_ab()
{
	int med;
	while(ft_getlstlen(&HEAD_LA) >= 3)
	{
//		*ft_get_tpile_pos(tmp) |= FPS_ABSPOS; // wrong instruction
		med = *ft_get_tpile_data(ft_getlstmedian(&HEAD_LA, ft_get_tpile_data));
		ft_printf("MEDIAN %d\n",med);
		ft_ps_print();
		ft_ps_push_ab_pivot(med);
		ft_ps_print();
		if (ft_getlstlen(&HEAD_LA) < 4 && (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data)))
		{
			ft_ps_order_3a();
		}
	}
		ft_ps_print();
}



int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
	ft_ps_getmedian_ab();
	return (0);
}
