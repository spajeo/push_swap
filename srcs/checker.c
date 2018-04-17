/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:46:13 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/16 16:43:53 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Check the instruction given by the push_swap program
** and execute them
*/

/*
void		ft_ps_print(void)
{
	printf(" ----------------------- \n");
	ft_print_nextdata(&HEAD_LA);
	printf("________________________\n");
	ft_print_nextdata(&HEAD_LB);
	printf(" ----------------------- \n");
}
//*/


#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void		ft_check_instruct(void)
{
	char	*line;
	
	line = NULL;
	while (get_next_line(0, &line) > 0)// && ft_strcmp("", line))
	{
		ft_ps_operations(line);
//		if ((FLAG__PS & PS__MOVE))
//			ft_printf("\x1B[31m%12s\x1B[0m\n", line);
		if ((FLAG__PS & PS__STEP))
			ft_ps_print();
//		free(line);
	}
//	if (line)
	{
		free(line);
	}
}

int			main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	++av;
	--ac;
	ft_exec_parse_str(&ac, av, &ft_ps_convert_argv);
	ft_check_instruct();
	if (ft_ps_is_sorted(&HEAD_LA, &HEAD_LB) && JUST_HEAD(HEAD_LB))
		ft_printf("\x1B[32mOK\n");
	else
		ft_printf("\x1B[31mKO\x1B[0m\n");
	if ((FLAG__PS & PS__STEP))
		ft_ps_print();
	ft_free_checker_and_push_swap();
	return (0);
}
