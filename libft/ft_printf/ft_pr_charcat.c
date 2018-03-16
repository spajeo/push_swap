/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_charcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 17:28:54 by spajeo            #+#    #+#             */
/*   Updated: 2017/07/19 17:13:28 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pr_charcat(void)
{
	if (B_LEN >= (BUFF_SIZE - (CHAR__MIN0 + 1)))
		ft_empty_buff();
	*(BUFF + B_LEN) = VAR;
	++B_LEN;
	*(BUFF + B_LEN) = 0;
}
