/*   Created: 2017/10/9 14:9:48 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"


void ft_ps_order_3b()
{

// Descending Order
	
	int len = ft_getlstlen(&HEAD_LB);
	if (!ft_is_lst_asc(&HEAD_LB, &ft_get_tpile_data) && len > 2)
	{
		if (*ft_get_tpile_pos(HEAD_LB.next) < *ft_get_tpile_pos(HEAD_LB.prev)) //pour 21 et autres
			ft_ps_opr("sb");
		if (*ft_get_tpile_pos(HEAD_LB.next) > *ft_get_tpile_pos(HEAD_LB.next->next))
			ft_ps_opr("rb");
		if (*ft_get_tpile_pos(HEAD_LB.next) > *ft_get_tpile_pos(HEAD_LB.next->next))
			ft_ps_opr("rrb");
	}
	ft_lst_convert_allvar(&HEAD_LB, &ft_get_tpile_pos, 2); //flag
	ft_refill_a(len);
	while (len--)
		ft_ps_opr("ra");
}

void ft_ps_order_3a()
{
//ascending order
	int len = ft_getlstlen(&HEAD_LA);
	if (!ft_is_lst_asc(&HEAD_LA, &ft_get_tpile_data) && len > 2)
	{
		if (*ft_get_tpile_pos(HEAD_LA.next) > *ft_get_tpile_pos(HEAD_LA.prev)) //pour 21 et autres
			ft_ps_opr("sa");
		if (*ft_get_tpile_pos(HEAD_LA.next) < *ft_get_tpile_pos(HEAD_LA.next->next))
			ft_ps_opr("ra");
		if (*ft_get_tpile_pos(HEAD_LA.next) < *ft_get_tpile_pos(HEAD_LA.next->next))
			ft_ps_opr("rra");
	}
	ft_lst_convert_allvar(&HEAD_LA, &ft_get_tpile_pos, 2); //flag
	ft_refill_b(len);
	while (len--)
		ft_ps_opr("rb");
}

void ft_ps_push_ab_pivot(int val)
{
	int len = ft_getlstlen(&HEAD_LA);
	
	while(len)
	{
		int data =*ft_get_tpile_data(HEAD_LA.next);
		if (data > val)
			ft_ps_exec_p(&HEAD_LA, &HEAD_LB);
		else
			ft_ps_exec_rr(&HEAD_LA);
		--len;
	}
}



void ft_ps_getmedian_ab()
{
	while(ft_getlstlen(&HEAD_LA) > 4)
	{
		t_lst *tmp = ft_getlstmedian(&HEAD_LA, *ft_get_tdata_data);
//		*ft_get_tpile_pos(tmp) |= FPS_ABSPOS; // wrong instruction
		int med = *ft_get_tpile_data(tmp);
		ft_ps_print();
		ft_ps_push_ab_pivot(med);
		ft_ps_print();
		ft_ps_order_3a();
	}
}


int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
//	while (ft_getlstlen(&HEAD_LA) >= 4)
//	{
//		ft_ps_print();
//		ft_ps_getmedian_ab();
//	}
	ft_ps_getmedian_ab();
//	ft_get_lst_from_int(&HEAD_LA,  &ft_get_tpile_data, 0);

	ft_ps_print();
	return (0);
}
