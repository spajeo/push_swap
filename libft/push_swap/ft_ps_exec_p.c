#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int			ft_ps_exec_p(t_lst *lst_a, t_lst *lst_b)
{
	if (JUST_HEAD_P(lst_a))
	{
		TESTINT("EXIST OUT OF SCOPE", 0);
		return (0);
	}
	else
	{
		ft_lstinsert_after(ft_lstdisconnect(lst_a->next), lst_b);
	}
	return (1);
}
