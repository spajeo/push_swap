
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_pile                  *ft_add_tpile_next(t_lst *head, const int nb)
{
	t_pile  *new;

	if (!(new = (t_pile *)malloc(sizeof(t_pile))))
		EXIT_FAIL("Failed memory allocation");

	ft_lstinsert_before(&new->lst, head);
	new->data = nb;
	new->pos = 0;
	new->median = 0;
	return (new);
}
