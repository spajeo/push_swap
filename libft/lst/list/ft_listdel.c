
#include "libft.h"
#include "liblst.h"

void	ft_listdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp_list;

	while (*alst != NULL)
	{
		tmp_list = (*alst)->next;
		ft_listdelone(alst, del);
		*alst = tmp_list;
	}
}
