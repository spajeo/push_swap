#include "libft.h"
#include "push_swap.h"

//static void        ft_ps_compress(t_lst *lst)
//{
//    while ()
//}

int			ft_ps_convert_mv(t_lst *lst_head)
{
	if (JUST_HEAD_P(lst_head))
		return (0);

	t_lst *tmp;

	tmp = lst_head->next;
	while (tmp != lst_head)
	{
		if (!(ft_strcmp(T_STR(tmp)->str,"pb"))
            && (!(ft_strcmp(T_STR(tmp->next)->str,"sa"))
                || !(ft_strcmp(T_STR(tmp->next)->str,"ra"))))
        {
//            ft_ps_compress(tmp);
           ft_printf("mv____%s\n",T_STR(tmp)->str);
        }
        tmp = tmp->next;
	}
	return (0) ;
}
