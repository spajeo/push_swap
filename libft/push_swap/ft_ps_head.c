/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_head.c                                       :+:      :+:    :+:   */
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
**          Singletons functions
*/
t_ps_head		*ft_ps_head(void)
{
	static t_ps_head		*ptr = NULL;

	if (ptr == NULL)
	{
		(ptr = (t_ps_head *)malloc(sizeof(t_ps_head)));
//		ft_bzero(ptr, sizeof(t_ps_head));
		NODE_INIT(ptr->head_mv);
		NODE_INIT(ptr->head_a);
		NODE_INIT(ptr->head_b);
		ptr->flag = 0;
		ptr->pr_a = 0;
		ptr->pr_b = 0;
	}
	return (ptr);
}
