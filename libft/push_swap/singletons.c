/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singletons.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 15:10:04 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:01:24 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "liblst.h"

/*
** Singletons functions
*/
/
ft_push_swap_head		*ft_push_swap_head(void)
{
	static t_push_swap_head		*ptr = 0;

	if (!ptr && (ptr = (t_push_swap_head *)malloc(sizeof(t_push_swap_head))))
	{
		ft_bzero(ptr, sizeof(t_push_swap_head));
		NODE_INIT(ptr->head_mv);
		ptr->flag = 0;
		NODE_INIT(ptr->head_a);
		ptr->nb_a = 0;
		NODE_INIT(ptr->head_b);
		ptr->nb_b = 0;
//		ft_printf("  HEAD : %d\n\n\n", PS__HEAD->nb_a);
	}
	return (ptr);
}
*/
