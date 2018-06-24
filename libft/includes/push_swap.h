/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:15:25 by spajeo            #+#    #+#             */
/*   Updated: 2018/03/15 15:10:34 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"


/*
** -----------------------------------------------------------------------------
*/
/*
** -----------------------------------------------------------------------------
*/

/*
** -----------------------------------------------------------------------------
** ------------------------------FLAGS-----------------------------------------
** -----------------------------------------------------------------------------
*/

#define FPS_ABSPOS                  0b01
#define FPS_RELPOSNEXT              (unsigned long)0b10
#define FPS_ABS                     1

/*
** -----------------------------------------------------------------------------
** ------------------------------TEST-----------------------------------------
** -----------------------------------------------------------------------------
*/

#define TESTSTR(str, it)  ft_printf("\x1B[35m%s__[%s]___\n\x1B[0m", str, it)
#define TESTINT(str, it)  ft_printf("\x1B[33m%45s__[%d]___\n\x1B[0m", str, it)
#define TESTINTR(str, it) ft_printf("\x1B[31m%45s__[%d}___\n\x1B[0m", str, it)
#define TESTINTG(str, it) ft_printf("\x1B[32m%45s__[%d}___\n\x1B[0m", str, it)
#define TESTINTB(str, it) ft_printf("\x1B[34m%45s__[%d}___\n\x1B[0m", str, it)
#define TESTINTM(str, it) ft_printf("\x1B[35m%45s__[%d}___\n\x1B[0m", str, it)

/*
** -----------------------GLOBALES AND HEAD REFS------------------------------
*/
#define PS__HEAD				(*ft_ps_head())
#define HEAD_LA	    			(ft_ps_head()->head_a)
#define HEAD_LB	    			(ft_ps_head()->head_b)
#define HEAD_PS_MV				(ft_ps_head()->head_mv)
#define FLAG__PS    			(ft_ps_head()->flag)

#define HA_A_     HEAD_LA.next
#define HA_B_     HEAD_LA.next->next
#define HA_C_     HEAD_LA.next->next->next

#define HB_A_     HEAD_LB.next
#define HB_B_     HEAD_LB.next->next
#define HB_C_     HEAD_LB.next->next->next

#define _PA_      (1)
#define _PB_      (2)
/*
** from ==  &new->lst
*/

#define PILE(it)    CONTAINEROF(it, t_pile, lst)
#define P_DATA(it)  PILE(it)->data
#define P_POS(it)   PILE(it)->pos
//#define PIVOT		PS__HEAD.pivot
//#define PIVOT_POS	PS__HEAD.pivot_pos

/*
** HEADS
*/
typedef struct s_ps_head
{
	t_lst		head_mv;
	size_t		flag;

	t_lst		head_a;
	size_t		pr_a;

	t_lst		head_b;
	size_t		pr_b;
}				t_ps_head;

t_ps_head		swap_head;

/*
**	SINGLETONS
*/
t_ps_head		*ft_ps_head(void);

/*
**	FLAGS
*/
# define PS__STEP (size_t)0b0000000000000001
# define PS__MOVE (size_t)0b0000000000000010

/*
**			     INIT/END
*/
void					ft_init_ps_head();
void					ft_ps_convert_argv(const char *s);
void					ft_check_instruct(void);
void					ft_free_checker_and_push_swap(void);
/*
**              CHECKER
*/
int						ft_ps_checkflags(int *ac, char **av);
/*
**              ALGORITHM
*/

void                    ft_ps_order(int pile, int depth);
void                    ft_ps_order_3a();
void                    ft_ps_order_3b();
int						ft_ps_convert_mv(t_lst *lst_head);
/*
**              CHECK
*/
int						ft_ps_is_sorted(t_lst *head_a, t_lst *head_b);
/*
**              OPERATIONS
*/
int                     ft_ps_operations(char *src);
int		                ft_ps_ops(char *src);
int             		ft_ps_oprr(char *src);
int		                ft_ps_opr(char *src);
int		                ft_ps_opp(char *src);
int						ft_ps_exec_p(t_lst *lst_a, t_lst *lst_b);
int						ft_ps_exec_s(t_lst *head);
int						ft_ps_exec_r(t_lst *head);
int						ft_ps_exec_rr(t_lst *head);
/*
**			   PS_REFILL
*/
void                    ft_refill_a_lim(int lim, int nb);
void                    ft_refill_b(int nb);
void                    ft_refill_a(int nb);
void                    ft_refill_b_lim(int lim, int nb);
/*
**             OPTIONS
*/
void                    ft_ps_print();
void					ft_print_a_and_b();

#endif
