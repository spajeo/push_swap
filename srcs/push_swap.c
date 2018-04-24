
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int ft_ps_push_pivot_ab(t_lst *head_a, int len, int pivot)
{
	int rot;
	int count;

	rot = 0;
	count = 0;
	while(len)
	{
		if (P_DATA(head_a->next) <= pivot)
		{
			ft_ps_operations("pa");
			++count;
		}
		else
		{
			ft_ps_operations("ra");
			++rot;
		}
		--len;
	}
	while (rot--)
        ft_ps_operations("rra");

	return(count);
	
}
int ft_ps_push_pivot_ba(t_lst *head_a,int len, int pivot)
{
	int rot;
	int count;

	rot = 0;
	count = 0;
	while(len) // tester
	{
		if (P_DATA(head_a->next) >= pivot) {
			ft_ps_operations("pb");
			++count;
		}
		else
		{
			ft_ps_operations("rb");
			++rot;
		}
		--len;
	}
	while (rot--)
		ft_ps_operations("rrb");
	return(count);
}

void ft_ps_getmedian(int pile, size_t depth)
{
	TESTINT("________________DEBUT_________________", pile);
	TESTINT("PILE A == 1 / B == 2", pile);
	TESTINTB("new depth", depth);
//	ft_ps_print();
	int med;
	int push;
//	int len;
	
//	if (ft_ps_is_sorted(&HEAD_LA, &HEAD_LB))
//		exit(1);
	if (depth <= 3)
	{
		ft_ps_order(pile, depth);
//		while (depth--)

	}
	else if (pile == _PA_)
	{
		med = ft_getval_fromrelpos_btwabspos(&HEAD_LA, 0, depth /*+ 1*/, ft_get_tpile_data, depth/2 + 1);
		push = ft_ps_push_pivot_ab(&HEAD_LA, depth, med);
//		ft_ps_print();
		TESTINT("med", med);
		TESTINTR("push PA appel      avec A", depth - push);
		ft_ps_getmedian(_PA_,depth - push);
//		ft_ps_print();
		TESTINT("med", med);
		TESTINTR("push PB appel de B avec A", push);
		ft_ps_getmedian(_PB_, push);

	}
	else if (pile == _PB_)
	{
		TESTINTB("PB depth for median", depth);
		med = ft_getval_fromrelpos_btwabspos(&HEAD_LB, 0, depth/* + 1*/, ft_get_tpile_data, depth/2 + 1);
		push = ft_ps_push_pivot_ba(&HEAD_LB, depth, med);
		TESTINT("med", med);
		TESTINTR("push PA appel de A avec B", push);
		ft_ps_getmedian(_PA_, push);
		TESTINT("med", med);
		TESTINTR("push PB appel avec B", depth - push);
		ft_ps_getmedian(_PB_, depth - push);
	}
	return;
}

int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
	ft_ps_getmedian(_PA_, ft_getlstlen(&HEAD_LA));
	ft_ps_print();
	return (0);
}
