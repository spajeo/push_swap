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

/*
**	            Struct Memory Access
**              GET VALUES FROM FUNCTIONS
*/

int						*ft_get_tpile_data(t_lst *ptr);
int						*ft_get_tpile_position(t_lst *ptr);
int						ft_get_tdata_data(t_lst *ptr);
char					*ft_get_tstr_str(t_lst *ptr);



/*
**					LIST
*/
t_lst				*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
t_lst				*ft_lstnew(const void *content, size_t content_size);
int					ft_bzero(void *s, size_t n);
void				ft_lstadd(t_lst **alst, t_lst *new);
//void				ft_listdel(t_list **alist, void (*del)(void *, size_t));
//void				ft_listdelone(t_list **alst, void (*f)(void *, size_t));
void				ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));

t_lst	*ft_lstdisconnect (t_lst *src);
void    ft_lstinsert_after(t_lst *new, t_lst *dst);
void    ft_lstinsert_before(t_lst *new, t_lst *dst);
void	ft_lstmv_after(t_lst *src, t_lst *dst);
void	ft_lstmv_before(t_lst *src, t_lst *dst);

/*
**	    CHECK ORDER COMPARE TO OTHER VALUES
*/

/*
**		CHECK POSITION IN THE LST LINKED LIST
**          next order
*/

/*
**	    LST IS
*/

int						ft_is_lst_asc(t_lst *head, int *(*get_int)(t_lst *));
int						ft_is_lst_desc(t_lst *head, int *(*get_int)(t_lst *));




/*
**		FT SORTING
*/

int list_empty(t_lst *head);

void				ft_t_data_free(t_lst *lst_head);
//void				ft_print_next_str(t_str *data_head);




int						*ft_get_lst_from_val_position(t_lst *head, int*(*get_int)(t_lst *), size_t position);



/*
**
*/

//t_data                  *ft_add_t_data_next(t_lst *head, const int nb);  --> non_generic_lst
void                    ft_print_next_int(t_lst *head, int *(*get_int)(t_lst *));
int						ft_lst_count(t_lst *head);
int     				ft_lst_count_lim(t_lst *head, int *(*get_int)(t_lst *), int lim);
int						ft_ps_next_t_data_issorted(t_lst *head_a, t_lst *head_b);
void                    ft_print_next_str(t_lst *head);
//void	ft_print_next_str(t_str *head_str);
//void	ft_print_next_data(t_data *head_data);
//t_lst	*ft_add_t_str_next(t_lst *head, char *str);
//t_data	*ft_add_t_data_next(t_data *head, const int nb); // ajouter tete generique

#endif
