
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int ft_ps_push_pivot_ab(t_lst *head_a, int pivot)
{
	int len = ft_getlstlen(head_a);
	int data;
	int count;
	
	count = 0;
	while(len)
	{
		data = P_DATA(head_a->next);
		if (data == pivot)
		{
			ft_ps_operations("pa");
			ft_ps_operations("rb");
			++count;
		}
		else if (data < pivot)
		{
			ft_ps_operations("pa");
			++count;
		}
		else
			ft_ps_operations("ra");

		--len;
	}
	ft_ps_operations("rrb");
	return(count);
	
}
int ft_ps_push_pivot_ba(t_lst *head_a, int pivot)
{
	int len = ft_getlstlen(head_a);
	int count;
	int data;
	
	count = 0;
	while(len)
	{
		data = P_DATA(head_a->next);
		if (data == pivot)
		{
			ft_ps_operations("pb");
			ft_ps_operations("ra");
			++count;
		}
		else if (P_DATA(head_a->next) > pivot)
		{
			ft_ps_operations("pb");
			++count;
		}
		else
			ft_ps_operations("rb");
		--len;
	}
	ft_ps_operations("rra");
	return(count);
}

void ft_ps_getmedian(int pile, size_t depth)
{
	int med;
	int push;
	
	if (depth <= 3)
			ft_ps_order(pile, depth);
	else if (pile == _PA_)
	{
		med = ft_getval_fromrelpos(&HEAD_LA, ft_get_tpile_data, depth/2);
		push = ft_ps_push_pivot_ab(&HEAD_LA, med);
		ft_ps_getmedian(_PA_,depth - push);
		ft_ps_getmedian(_PB_, push);
		
	}
	else if (pile == _PB_)
	{
		med = ft_getval_fromrelpos (&HEAD_LB, ft_get_tpile_data, depth/2);
		push = ft_ps_push_pivot_ba(&HEAD_LB, med);
		ft_ps_getmedian(_PB_, depth - push);
		ft_ps_getmedian(_PA_, push);
	}
	return;
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
	ft_ps_print();
	ft_ps_getmedian(_PA_, ft_getlstlen(&HEAD_LA));
	ft_ps_print();
	return (0);
}
