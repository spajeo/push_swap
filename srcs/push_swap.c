
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3a() // Descending Order
{
	if (ft_getlstlen(&HEAD_LA) == 3)
	{
		if (P_DATA(HA_A_) < P_DATA(HA_C_) && P_DATA(HA_A_) > P_DATA(HA_B_))
			ft_ps_operations("sa");
		if (P_DATA(HA_A_) < P_DATA(HA_C_) && P_DATA(HA_A_) < P_DATA(HA_B_))
		{
			ft_ps_operations("sa");
			ft_ps_operations("ra");
		}
		if (ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data)) //pour 21 et autres
		{
			ft_ps_operations("sa");
			ft_ps_operations("rra");
		}
		if (P_DATA(HA_A_) > P_DATA(HA_B_) && P_DATA(HA_B_) < P_DATA(HA_C_))
			ft_ps_operations("ra");
		if (P_DATA(HA_A_) > P_DATA(HA_C_))
			ft_ps_operations("rra");
	}
	else if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data))
		ft_ps_operations("sa");
	ft_lst_convert_allvar(&HEAD_LA, ft_get_tpile_pos, 1);
}

void ft_ps_push_pivot(t_lst *head_a, int pivot)
{
	int len = ft_getlstlen(head_a);
	int data;
	
//	ft_ps_print();
	while(len)
	{
		data = *ft_get_tpile_data(head_a->next);
		if (data == pivot)
		{
			P_POS(head_a->next) = 1;
			ft_ps_operations("pa");
			ft_ps_operations("rb");
		}
		else if (data >= pivot)
		{
			ft_ps_operations("pa");
		}
		else
			ft_ps_operations("ra");
		
		ft_ps_print();
		--len;
	}
	ft_ps_operations("rrb");
//	ft_ps_print();
}

void ft_ps_getmedian_ab()
{
	int med;
	int compteur;
	int len;
	
	for (compteur = 0 ; compteur <= 9 ; compteur++)
	{
		len = ft_getlstlen(&HEAD_LA);
		med = *ft_get_tpile_data(ft_getlst_fromrelpos(&HEAD_LA, ft_get_tpile_data, len/2));
		ft_ps_push_pivot(&HEAD_LA, med);
		if (ft_getlstlen(&HEAD_LA) <= 3 && (!ft_is_lst_asc(&HEAD_LA, &ft_get_tpile_data)))
		{
			ft_ps_order_3a();
			ft_refill_b(len);
		}t a
	}
//		ft_ps_print();
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
	PILE(ft_getlstmedian(&HEAD_LA, ft_get_tpile_data))->median = 2;
	ft_ps_getmedian_ab();
	return (0);
}
