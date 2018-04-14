/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 22:09:27 by spajeo            #+#    #+#             */
/*   Updated: 2017/10/31 16:19:02 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLST_H
# define LIBLST_H

#include "linux_compiler.h"
# include "libft.h"
/*
** Initializes the lst within a structure and sets prev and next pointers
** on itself. (NB : the structure needs to be allocated)
**
** 1st parameter : node to be init
*/
# define HEAD_INIT(name)				{ (name), (name) }
# define NODE_INIT(it)					(((it).next = &(it)) && ((it).prev = &(it)))
# define NODE_INIT_P(it)				(((it)->lst.next = (it)->lst) && ((it)->lst.prev = (it)->lst))
#define JUST_HEAD(it)					((it).next == &(it) && (it).prev == &(it))
#define JUST_HEAD_P(it)					((it)->next == (it) && (it)->prev == (it))

/*
** Sets a pointer on 0, so we can get rid of the offset of the given field
** and use its "absolute" address with OFFSETOF
**
** 1st parameter : structure type
** 2nd parameter : name of the list within the structure
*/
# define OFFSETOF(st, lst)				((char *)(&(((st *)0)->lst)))


/*
** Calculates the address of the structure thanks to the given address of
** the structure field. Because the offset is calculated by OFFSETOF, the
** difference gives directly the field width.
**
** 1st parameter : list pointer
** 2nd parameter : structure type
** 3rd parameter : name of the list within the structure
*/
# define CONTAINEROF(ptr, st, lst)	((st *)((char *)(ptr) - OFFSETOF(st, lst)))


#define T_DATA(it) CONTAINEROF(it, t_data, lst)
#define T_STR(it) CONTAINEROF(it, t_str, lst)

typedef struct s_lst	t_lst;

typedef struct		s_lst
{
	t_lst	*prev;
	t_lst	*next;
}				t_lst;

typedef struct		s_data
{
	int 	data;
	t_lst	lst;
}				t_data;

typedef struct		s_str
{
	char 	*str;
	t_lst	lst;
}				t_str;

/*
**		GLOBALS	REFEREAL
*/

/*
**		FT SORTING
*/

int list_empty(t_lst *head);


t_lst	*ft_lst_disconnect (t_lst *src);
void    ft_lst_add_after(t_lst *new, t_lst *dst);
void    ft_lst_add_before(t_lst *new, t_lst *dst);
void	ft_lstmv_after(t_lst *src, t_lst *dst);
void	ft_lstmv_before(t_lst *src, t_lst *dst);

void				ft_t_data_free(t_lst *lst_head);
//void				ft_print_next_str(t_str *data_head);


void	rot_head_next();
void 	rot_head_prev();



int						*ft_get_lst_from_val_position(t_lst *head, int*(*get_int)(t_lst *), size_t position);



/*
**
*/

//t_data                  *ft_add_t_data_next(t_lst *head, const int nb);  --> non_generic_lst
void                    ft_print_next_int(t_lst *head, int *(*get_int)(t_lst *));
int						ft_lst_count(t_lst *head);
int     				ft_lst_count_lim(t_lst *head, int *(*get_int)(t_lst *), int lim);

int						ft_is_lst_asc(t_lst *head, int *(*get_int)(t_lst *));
int						ft_is_lst_desc(t_lst *head, int *(*get_int)(t_lst *));
int						ft_ps_next_t_data_issorted(t_lst *head_a, t_lst *head_b);
void                    ft_print_next_str(t_lst *head);
//void	ft_print_next_str(t_str *head_str);
//void	ft_print_next_data(t_data *head_data);
//t_lst	*ft_add_t_str_next(t_lst *head, char *str);
//t_data	*ft_add_t_data_next(t_data *head, const int nb); // ajouter tete generique

#endif
