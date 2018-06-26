
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int ft_ps_push_pivot_ab(t_lst *head_a, int len, int pivot)
{
	int rot;
	int count;

	TESTINTG("PIVOT", pivot);
	rot = 0;
	count = 0;
	while(len) //i&& (ft_islst_asc(&HEAD_LA, ft_get_tpile_data) == 0))
	{
//		int ref = P_DATA(head_a->next);
//		ref = ref * 1;
		if (P_DATA(head_a->next) < pivot)
		{
			TESTINTG("On Pile to print", P_DATA(head_a->next));
			ft_ps_operations("pb");
			++count;
		}
		else
		{
			ft_ps_operations("ra");
			++rot;
		}
		--len;
//		if (ft_islst_asc(&HEAD_LA, ft_get_tpile_data))
//            break;
	}
	while (rot--)
        ft_ps_operations("rra");

	return(count);
}

int ft_ps_push_pivot_ba(t_lst *head,int len, int pivot)
{
	int rot;
	int count;

	rot = 0;
	count = 0;
//	while(len && !(ft_islst_desc(&HEAD_LB, ft_get_tpile_data)))
	while(len)
	{
		if (P_DATA(head->next) > pivot) {
			TESTINTG("B On Pile to print", P_DATA(head->next));

			ft_ps_operations("pa");
			++count;
		}
		else
		{
			ft_ps_operations("rb");
			++rot;
		}
		--len;
//		if (ft_islst_desc(&HEAD_LB, ft_get_tpile_data))
//			break;
	}
	while (rot--)
		ft_ps_operations("rrb");
	return(count);
}

void ft_ps_getmedian(int pile, size_t depth)
{
	int med;
	int push;

	TESTINTM("depth", depth);
	TESTINTR("pile", pile);
	if (depth <= 3)
	{
		ft_ps_order(pile, depth);
	}
	else if (pile == _PA_)
	{
		med = ft_getval_fromrelpos_btwabspos(&HEAD_LA, 0, depth, ft_get_tpile_data, depth/2 + depth%2);//+1
		TESTINTM("MEDIAN", med);
		push = ft_ps_push_pivot_ab(&HEAD_LA, depth, med);
		TESTINTM("push", push);
		ft_ps_getmedian(_PA_,depth - push);
		ft_ps_getmedian(_PB_, push);

	}
	else if (pile == _PB_)
	{
		med = ft_getval_fromrelpos_btwabspos(&HEAD_LB, 0, depth, ft_get_tpile_data, depth/2);
		TESTINTM("MEDIAN", med);
		push = ft_ps_push_pivot_ba(&HEAD_LB, depth, med);
		TESTINTM("push", push);
		ft_ps_getmedian(_PA_, push);
		ft_ps_getmedian(_PB_, depth - push);
	}
    ft_ps_print();
	return;
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
	ft_ps_getmedian(_PA_, ft_getlstlen(&HEAD_LA));
//    ft_print_next_tstr_str(&HEAD_PS_MV);
    ft_ps_convert_mv(&HEAD_PS_MV);
    ft_ps_refill();
    ft_ps_print();
//    if (check the options)
//    	ft_ps_print();
	return (0);
}
