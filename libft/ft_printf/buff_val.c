/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 18:32:35 by spajeo            #+#    #+#             */
/*   Updated: 2017/11/23 16:58:07 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_prefixe(void)
{
	if ((FLAG & FLAG_PREF) && (FLAG & NUMBER)
			&& (!(FLAG & FLAG_NULL) || FLAG & FLAG_P || FLAG & FLAG_D))
		ft_pr_strcatcount(PREF);
	if (FLAG & FLAG_P && !(FLAG & FLAG_NULL))
		ft_pr_strcatcount("7fff");
	if (PREC > 0)
		ft_pr_memsetblim('0', PREC);
}

void	ft_printing_uvalmaj(void)
{
	if ((FLAG & FLAG_LEFT) && PAD > 0)
	{
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(UVAL, BASE, BASE_B);
		ft_pr_memsetblim(' ', PAD);
	}
	else if ((PAD > 0) || ((FLAG & FLAG_ZERO) && PREC > 0 && PAD > 0))
	{
		ft_pr_memsetblim(' ', PAD);
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(UVAL, BASE, BASE_B);
	}
	else
	{
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(UVAL, BASE, BASE_B);
	}
}

void	ft_printing_uval(void)
{
	if ((FLAG & FLAG_LEFT || (FLAG & FLAG_P && !(FLAG & FLAG_LEFT)))
			&& PAD > 0)
	{
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(UVAL, BASE, BASE_S);
		ft_pr_memsetblim(' ', PAD);
	}
	else if ((FLAG & FLAG_P && FLAG & FLAG_LEFT) || (!(FLAG & FLAG_P
		&& !UVAL && !PAD) && ((FLAG & FLAG_PAD && PAD > 0)
		|| (FLAG & FLAG_ZERO && PREC > 0))))
	{
		ft_pr_memsetblim(' ', PAD);
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(UVAL, BASE, BASE_S);
	}
	else
	{
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(UVAL, BASE, BASE_S);
	}
}

void	ft_printing_val(void)
{
	if ((FLAG & FLAG_LEFT) && PAD > 0)
	{
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(VAL, BASE, BASE_10);
		ft_pr_memsetblim(' ', PAD);
	}
	else if (((FLAG & FLAG_PAD) && PAD > 0)
								|| ((FLAG & FLAG_ZERO) && PREC > 0 && PAD > 0))
	{
		ft_pr_memsetblim(' ', PAD);
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
		{
			B_LEN += ft_pr_itoa_ubase_gbuff(VAL, BASE, BASE_10);
		}
	}
	else
	{
		ft_print_prefixe();
		if (!(FLAG & FLAG_NULL))
			B_LEN += ft_pr_itoa_ubase_gbuff(VAL, BASE, BASE_10);
	}
}
