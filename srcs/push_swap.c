/*   Created: 2017/10/9 14:9:48 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_ps_order_3a()
{
	// Descending Order

	int len = ft_getlstlen(&HEAD_LA);
	if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data) && len > 2)
	{
		if (*ft_get_tpile_pos(HEAD_LA.next) > *ft_get_tpile_pos(HEAD_LA.prev)) //pour 21 et autres
			ft_ps_opr("sa");
		if (*ft_get_tpile_pos(HEAD_LA.next) < *ft_get_tpile_pos(HEAD_LA.next->next))
			ft_ps_opr("ra");
		if (*ft_get_tpile_pos(HEAD_LA.next) < *ft_get_tpile_pos(HEAD_LA.next->next))
			ft_ps_opr("sa");
		if (*ft_get_tpile_pos(HEAD_LA.next) < *ft_get_tpile_pos(HEAD_LA.next->prev))
			ft_ps_opr("rra");
	}
	if (!ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data) && len == 2)
		ft_ps_opr("sa");
	ft_lst_convert_allvar(&HEAD_LA, &ft_get_tpile_pos, 2); //flag
	ft_refill_b(len);
	while (len--)
		ft_ps_opr("rb"); // si rrb -> wrong instruction
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
	while(ft_getlstlen(&HEAD_LA) > 4)
	{
		t_lst *tmp = ft_getlstmedian(&HEAD_LA, ft_get_tpile_data);
//		*ft_get_tpile_pos(tmp) |= FPS_ABSPOS; // wrong instruction
		med = *ft_get_tpile_data(tmp);
		ft_printf("MEDIAN %d\n",med);
//		ft_ps_print();
		ft_ps_push_ab_pivot(med);
//		ft_ps_print();

	}
	ft_ps_order_3a();
	ft_ps_print();
}


int			main(int ac, char **av)
{
	if (ac == 2)
		ft_exec_parse_str(*(++av), &ft_ps_convert_argv);
	else
		ft_exec_parse_strstr(&(*(++av)), &ft_ps_convert_argv);
	ft_ps_getmedian_ab();
//	ft_ps_print();
	return (0);
}
