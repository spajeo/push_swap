

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int	ft_ps_is_sorted(t_lst *head_a, t_lst *head_b)
{
	if (!ft_is_lst_asc(head_a, &ft_get_tpile_data))
		return (0);
	if (!ft_islst_desc(head_b, &ft_get_tpile_data))
		return (0);
	if (!(JUST_HEAD_P(head_a)) && !(JUST_HEAD_P(head_b))
			&& PILE(head_a)->data > PILE(head_b)->data)
		return (0);
	return (1);
}
