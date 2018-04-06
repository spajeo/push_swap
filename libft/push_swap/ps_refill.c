
#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

void ft_refill_a_lim(int lim, int nb)
{

	while (nb != 0 && lim != 0)
	{
		ft_pushswap_operation("pb");
		--nb;		
		--lim;		
	}
}

void ft_refill_b(int nb)
{

	while (nb != 0)
	{
		ft_pushswap_operation("pa");
		--nb;		
	}
}

void ft_refill_a(int nb)
{

	while (nb != 0)
	{
		ft_pushswap_operation("pb");
		--nb;		
	}
}

void ft_refill_b_lim(int lim, int nb)
{

	while (nb != 0 && lim != 0)
	{
		ft_pushswap_operation("pa");
		--nb;		
		--lim;		
	}
}

