/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:46:13 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 14:58:39 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

/*
** Check the instruction given by the push_swap program
** and execute them
*/

/*
void		ft_print_stack_a_and_b(void)
{
	printf(" ----------------------- \n");
	ft_print_next_data(&HEAD_LA);
	printf("________________________\n");
	ft_print_next_data(&HEAD_LB);
	printf(" ----------------------- \n");
}
//*/


int			main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	++av;
	--ac;
	ft_exec_parse(&ac, av, &ft_convert_argv);
	ft_check_instruct();
	if (ft_t_data_issorted(HEAD_LA) && JUST_HEAD(HEAD_LB))
		ft_printf("\x1B[32mOK\n");
	else
		ft_printf("\x1B[31mKO\x1B[0m\n");
	if ((FLAG__PS & PS__STEP))
		ft_print_stack_a_and_b();
	ft_free_checker_and_push_swap();
	return (0);
}
