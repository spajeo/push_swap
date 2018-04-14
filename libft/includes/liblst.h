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

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct      s_pile
{
	int     position;
	int     data;
	t_lst   lst;
}	               t_pile;

/*
**	        Struct Memory Access
**          GET VALUES FROM FUNCTIONS
*/
char		    	*ft_get_tstr_str(t_lst *ptr);
int					*ft_get_tpile_data(t_lst *ptr);
int					*ft_get_tpile_position(t_lst *ptr);
int					ft_get_tdata_data(t_lst *ptr);
t_lst				*ft_get_lst_from_int(t_lst *head, int *(*get_int)(t_lst *), int ref);
/*
**		    LIST
*/
t_lst           	*ft_lstdisconnect (t_lst *src);
t_lst				*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
t_lst				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstadd(t_lst **alst, t_lst *new);
void				ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
void            	ft_lstinsert_after(t_lst *new, t_lst *dst);
void            	ft_lstinsert_before(t_lst *new, t_lst *dst);
void	            ft_lstmv_after(t_lst *src, t_lst *dst);
void				ft_lstmv_before(t_lst *src, t_lst *dst);
/*
**	       COUNT
*/
int					ft_lst_count(t_lst *head);
int     			ft_lst_count_lim(t_lst *head, int *(*get_int)(t_lst *), int lim);
/*
**	      RELATIVE POSITION
**        CHECK ORDER COMPARE TO OTHER VALUES
*/
int					*ft_getval_fromabspos(t_lst *head, int*(*get_int)(t_lst *), size_t position);
int                 ft_getrelpos_fromlstval(t_lst *head, int *(* get_int)(t_lst *), t_lst *ref);
/*
**		  ABSOLUTE POSITION
**        CHECK POSITION IN THE LST LINKED LIST with NEXT
*/
int                 ft_getabspos_fromlst(t_lst *head, t_lst *ref);
int                 ft_getabspos_fromval(t_lst *head, int*(*get_int)(t_lst *), int val);
int                 ft_getval_fromlst_abspos(t_lst *head, int *(* get_int)(t_lst *) , size_t position);
/*
**          IS LST
*/
t_lst               *ft_is_lst_empty(t_lst *head);
int                 ft_is_val_in(t_lst *head, int data, int *(*get_struct_el)(t_lst *));
int                 ft_is_first_inf(t_lst *head, int *(*get_int)(t_lst *));
/*
**          IS ALGORITHM
*/
int					ft_is_lst_asc(t_lst *head, int *(*get_int)(t_lst *));
int					ft_is_lst_desc(t_lst *head, int *(*get_int)(t_lst *));
int                 ft_is_ref_inf(t_lst *head, int *(*get_int)(t_lst *), int ref);
int                 ft_is_reflst_sup(t_lst *head, int *(*get_int)(t_lst *), t_lst *ref);
/*
**	      COMPARE ABS & REL POSITIONS
*/
int                 ft_is_abspos_is_relpos(t_lst *head, int*(*get_int)(t_lst *), t_lst *ref);
/*
**	   CREATE/DELETE STRUCTURE
*/
t_pile              *ft_add_tpile_next(t_lst *head, const int nb);
void				*ft_add_tstr_next(t_lst *head, char *str);
t_data              *ft_add_tdata_next(t_lst *head, const int nb);
void				ft_tdata_free(t_lst *lst_head);
/*
**	        PRINT
*/
void               ft_print_next_int(t_lst *head, int *(*get_int)(t_lst *));
void               ft_print_next_str(t_lst *head, char *(*get_str)(t_lst *));

#endif
