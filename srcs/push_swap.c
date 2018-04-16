/*   Created: 2017/10/9 14:9:48 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void ft_flagis_abspos(t_lst *head)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp  != head)
	{
		ft_printf("%d", *tmp);
		if (PILE(tmp)->position == 0 && ft_is_abspos_is_relpos(head, &ft_get_tpile_data, tmp))
		{
			PILE(tmp)->position = 2;
		}
		tmp = tmp->next;
		ft_printf("%d", PILE(tmp)->position);
	}
}

/*
** Add a set for position
*/
/*
int ft_sorting()
{
	if (PILE(HEAD_LB.next)->data < PILE(HEAD_LB.next->next)->data &&
			PILE(HEAD_LB.next)->data < PILE(HEAD_LB.next->next)->data)
	{
		ft_ps_operations("sa");
		ft_ps_operations("sb");
	}
	else if (PILE(HEAD_LB.next)->data < PILE(HEAD_LB.next->next)->data)
	{
		ft_ps_operations("sb");
	}
	else if (PILE(HEAD_LA.next)->data > PILE(HEAD_LA.next->next)->data)
	{
		ft_ps_operations("sa");
	}
	return (1);
}

void		ft_lst_convert_all_val(t_lst *head, int *(* get_int)(t_lst *), int val)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		*get_int(tmp) = val;
		tmp= tmp->next;	
	}
}
*/

void			ft_organise_around_pivot_b()
{
	int		pivot;
	int		nb = 0;

	while (!(ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_position, 1)))
	{
		if (ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data))
			return;
/*		while (!(JUST_HEAD(HEAD_LB)) && !(ft_is_ref_inf(&HEAD_LB, &ft_get_tpile_position, 1)))
		{
			TESTSTR("pivot B","REFILL");
			ft_ps_print();
			ft_refill_b(ft_get_int_abspos(&HEAD_LB, &ft_get_tpile_position, 0)); //trouver la limite// autre fonction
			TESTINT("REFILL",ft_get_int_abspos(&HEAD_LB, &ft_get_tpile_position, 0));
		}
*/
		if (!(JUST_HEAD(HEAD_LB)))
		{
			while (PILE(HEAD_LB.next)->position > 0)
			{
				ft_ps_operations("pb");
			}
			pivot = PILE(HEAD_LB.next)->data;
			PILE(HEAD_LB.next)->position = 1;
			ft_ps_operations("pb");
			ft_ps_operations("ra");
			while ((ft_is_ref_inf(&HEAD_LB, &ft_get_tpile_data, pivot)))
			{
				if (PILE(HEAD_LB.next)->data < pivot)
				{
					ft_ps_operations("pb");
				}
				else
				{
					ft_ps_operations("rb");
					++nb;
				}
			}
				while (nb != 0)
				{
					ft_ps_operations("rrb");
					--nb;
				}
			ft_ps_operations("rra");
		}
/*
*/
	}
}

int			ft_organise_around_pivot_a()
{
	int		pivot;
	int		nb = 0;

	if (!(ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_position, 1)))
	{
		ft_refill_a(ft_lst_count(&HEAD_LB));
//		ft_flagis_abspos(&HEAD_LA);
	}
	while (PILE(HEAD_LA.next)->position == 1)
	{
		ft_ps_operations("pa");
	}
	pivot = PILE(HEAD_LA.next)->data;
	PILE(HEAD_LA.next)->position = 1;
	ft_ps_operations("pa");
	ft_ps_operations("rb");
	while ((ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_data, pivot)))
	{
		if (PILE(HEAD_LA.next)->data < pivot)
		{
			ft_ps_operations("pa");
		}
		else
		{
			ft_ps_operations("ra");
			++nb;
		}
	}
		while (nb != 0)
		{
			ft_ps_operations("rra");
			--nb;
		}
	ft_ps_operations("rrb");
//*
	if (!(ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_position, 1)))
	{
		ft_refill_a(ft_lst_count(&HEAD_LB));
	}
//*/
	return (1);
}

int			main(int ac, char **av)
{
	if (ac == 1)
	{
		return(0);
	}
	else
		ft_exec_ac_parse(&(ac),&(*(++av)), &ft_ps_convert_argv);
		ft_flagis_abspos(&HEAD_LA);
/*
		ft_ps_print();
           while (!(ft_ps_is_sorted(&HEAD_LA, &HEAD_LB))) {
			ft_organise_around_pivot_a();
			if (ft_ps_is_sorted(&HEAD_LA, &HEAD_LB))
				break;
			ft_organise_around_pivot_b();
			ft_refill_a(ft_lst_count(&HEAD_LB));
			ft_ps_print();
		}
	}
 */
//	ft_refill_a(ft_lst_count(&HEAD_LB));
	ft_ps_print();
	return (0);
}
