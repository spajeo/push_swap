/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_t_data_head.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 15:08:01 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 14:56:20 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../../ex/includes/push_swap.h"

t_data	*ft_init_t_data_head(void)
{
	t_data	*new;

	if (!(new = ft_memalloc(sizeof(t_data))))
		EXIT_FAIL("Failed memory allocation");
	return (new);
}
