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
** TEST
*/
#define TESTSTR(str, it)  ft_printf("\x1B[35m%s__[%s]___\n\x1B[0m", str, it) 
#define TESTINT(str, it)  ft_printf("\x1B[33m%s__[%d]___\n\x1B[0m", str, it) 
#define TESTINTR(str, it) ft_printf("\x1B[31m%s__[%d}___\n\x1B[0m", str, it) 
#define TESTINTG(str, it) ft_printf("\x1B[32m%s__[%d}___\n\x1B[0m", str, it) 
#define TESTINTB(str, it) ft_printf("\x1B[34m%s__[%d}___\n\x1B[0m", str, it) 
#define TESTINTM(str, it) ft_printf("\x1B[35m%s__[%d}___\n\x1B[0m", str, it) 


/*
**	Globales and Head Refs 
*/
/*
#define PS__HEAD				swap_head
#define HEAD_LA	    			swap_head.head_a
#define HEAD_LB	    			(swap_head.head_b)
#define HEAD_PS_MV				(swap_head.head_mv)
#define FLAG__PS    			(swap_head.flag)
//*/
//*
#define PS__HEAD				(*ft_push_swap_head())
#define HEAD_LA	    			(ft_push_swap_head()->head_a)
#define HEAD_LB	    			(ft_push_swap_head()->head_b)
#define HEAD_PS_MV				(ft_push_swap_head()->head_mv)
#define FLAG__PS    			(ft_push_swap_head()->flag)
//*/


 /*
** from ==  &new->lst
*/

#define PILE(it) CONTAINEROF(it, t_pile, lst)

#define PIVOT		PS__HEAD.pivot
#define PIVOT_POS	PS__HEAD.pivot_pos

typedef struct      s_pile
{
	    int     position;
		int     data;
		t_lst   lst;
}	               t_pile;

/*
** HEADS
*/
typedef struct s_push_swap_head
{
	t_lst		head_mv;
	size_t		flag;
	
	int			min_val;
	int			first_quarter_val;
	int			median_val;
	int			third_quarter_val;
	int			max_val;
	size_t		bucket_values;

	int			pivot;
	int			pivot_pos;

	t_lst		head_a;
	size_t		nb_a;

	t_lst		head_b;
	size_t		nb_b;
}				t_push_swap_head;

t_push_swap_head		swap_head;
// creer une fonction pour faire une te^ete

/*
**	SINGLETONS
*/
t_push_swap_head		*ft_push_swap_head(void);

/*
**	FLAGS
*/
# define PS__STEP (size_t)0b0000000000000001
# define PS__MOVE (size_t)0b0000000000000010


void					ft_init_ps_head();
t_pile                  *ft_add_tpile_next(t_lst *head, const int nb);
void					*ft_add_tstr_next(t_lst *head, char *str);

/*
**			ps_refill
*/

void                    ft_refill_a_lim(int lim, int nb);
void                    ft_refill_b(int nb);
void                    ft_refill_a(int nb);
void                    ft_refill_b_lim(int lim, int nb);

/*
**		    absolute position
*/


int                     ft_get_int_abspos(t_lst *head, int*(*get_int)(t_lst *), int val);




//int						ft_mv_inf_half();
t_lst					*ft_get_lst_from_int(t_lst *head, int *(*get_int)(t_lst *), int ref);

int						ft_is_there_inf(t_lst *head, int *(*get_int)(t_lst *));
int						ft_is_there_inf_ref(t_lst *head, int *(*get_int)(t_lst *), t_lst *ref);
int						ft_is_there_inf_int(t_lst *head, int *(*get_int)(t_lst *), int ref);

int						ft_is_val_in(t_lst *head, int data, int *(*get_offset)(t_lst *));

/*
**			     LIBRAIRIE
*/

void      		      	ft_exec_ac_parse(int *i, char **str, void (*f)(const char *));
void            		ft_exec_parse_ps(char *str, void (*f)(const char *));


/*
** checker
*/
int						ft_check_flag_push_swap(int *ac, char **av);
size_t		 	   		*ft_flag_push_swap();




/*
**              OPERATIONS
*/


int						ft_ps_next_t_data_issorted(t_lst *head_a, t_lst *head_b);
int                     ft_ps_pushswap_operation(char *src);
int		                ft_pushswap_ops(char *src);
int             		ft_pushswap_oprr(char *src);
int		                ft_pushswap_opr(char *src);
int		                ft_pushswap_opp(char *src);
void                    ft_ps_print_stack_a_and_b();
//void					ft_print_a_and_b();
void					ft_ps_convert_argv(const char *s);
void					ft_free_checker_and_push_swap(void);
void					ft_check_instruct(void);

int						ft_ps_exec_p(t_lst *lst_a, t_lst *lst_b);
int						ft_ps_exec_s(t_lst *head);
int						ft_ps_exec_r(t_lst *head);
int						ft_ps_exec_rr(t_lst *head);
/*                  
**                  
*/

#endif
