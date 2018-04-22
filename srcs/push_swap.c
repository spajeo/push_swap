
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_push_pivot_ab(t_lst *head_a, int pivot)
{
	int len = ft_getlstlen(head_a);
	int data;
	
	while(len)
	{
		data = *ft_get_tpile_data(head_a->next);
		if (data == pivot)
		{
			P_POS(head_a->next) = 1;
			ft_ps_operations("pa");
			ft_ps_operations("rb");
//			ft_ps_print();
		}
		else if (data <= pivot)
		{
			ft_ps_operations("pa");
		}
		else
			ft_ps_operations("ra");

		--len;
	}
	ft_ps_operations("rrb");
}
void ft_ps_push_pivot_ba(t_lst *head_a, int pivot)
{
	int len = ft_getlstlen(head_a);
	int data;
	
	while(len)
	{
		data = *ft_get_tpile_data(head_a->next);
		if (data == pivot)
		{
			P_POS(head_a->next) = 1;
			ft_ps_operations("pa");
			ft_ps_operations("rb");
//			ft_ps_print();
		}
		else if (data <= pivot)
		{
			ft_ps_operations("pa");
		}
		else
			ft_ps_operations("ra");
		
		--len;
	}
	ft_ps_operations("rrb");
}

void ft_ps_getmedian(int pile, size_t tdepth)
{
	int med;
	int len;

	if (pile == _PA_ && depth <= 3)
	{
		if (!ft_is_lst_desclim(&HEAD_LA, &ft_get_tpile_data, tdepth))
			ft_ps_order_3a();
		ft_ps_print();
		return;
	}
	else if (pile == _PB_ && depth <= 3)
	{
		if (!ft_is_lst_asclim(&HEAD_LA, &ft_get_tpile_data, tdepth))
			ft_ps_order_3b();
		ft_ps_print();
		return;
	}
	else
	{
		len = ft_getlstlen(&HEAD_LA);
		med = *ft_get_tpile_data(ft_getlst_fromrelpos(&HEAD_LA, ft_get_tpile_data, len/2));
		if (pile == _PA_)
			ft_ps_push_pivot_ab(&HEAD_LA, med);
		else if (pile == _PB_)
			ft_ps_push_pivot_ba(&HEAD_LB, med);
		ft_ps_getmedian(_PA_, 3);
		ft_ps_getmedian(_PB_, 3);
	}
	ft_ps_print();
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
//	ft_ps_getmedian(_PA_);
	ft_ps_print();
	return (0);
}
