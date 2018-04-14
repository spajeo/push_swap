/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:54:27 by spajeo            #+#    #+#             */
/*   Updated: 2017/11/02 17:39:54 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


/*
** For write
*/
# include <unistd.h>

/*
** For limits
*/
# include <limits.h>

/*
** For sizeof and malloc
*/
# include <stdlib.h>

/*
** liblist.h
*/
# include "liblst.h"

/*
** get_next_line
*/
# include "get_next_line.h"

/*
** ft_printf
*/
# include <stdarg.h> // dans printf
# include "ft_printf.h"

/*
** error
*/
#include <errno.h>

# include <string.h>
# include <stdio.h>
# include <wchar.h> //dans printf
# include <locale.h> // dans printf
# include <stdint.h>

/*
** Flags system 
*/
# define ON		1
# define OFF	0


/*
** malloc 
*/
# define ALLOCATION(var, type) 	if(!(var = ft_memalloc(sizeof(type))))\
								{EXIT_FAIL("Failed memory allocation");} 
# define EXIT_FMEM	 			{EXIT_FAIL("Failed memory allocation");} 

/*
** Number of bits and mask sign
*/
# define NB_BIT 8
# define MASK_SIGN ((sizeof(int) * NB_BIT) - 1)

/*
** FAILURE / SUCCESS
*/
# define EXIT_FAIL(txt)	{ ft_printf("%s\n", txt); exit(EXIT_FAILURE); }
# define EXIT_OK(txt)	{ ft_printf("%s\n", txt); exit(EXIT_SUCCESS); }

/*
** Functions
*/
# define TIME_10(nb) ((nb << 3) + (nb << 1))
# define SWAP(type,x,y) {type z; z = x; x = y; x = z;}
# define ABS(x) ((x + (x >> MASK_SIGN)) ^ (x >> MASK_SIGN))
# define SIZEOF(x) (sizeof(x)/sizeof(x[0]))

/*
**	COLORS
*/
#define KNRM  "\x1B[0m"
#define KRED  \x1B[31m
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define END   "\x1B[0m"



# define CHAR_1  0b00000000
# define WCHAR_2 0b1100000010000000
# define WCHAR_3 0b111000001000000010000000
# define WCHAR_4 0b11110000100000001000000010000000

# define BUFF_SIZE		512
# define PREFIXE_LEN	4
# define CHAR__LEN		1
# define CHAR__MIN0		2
# define WCHAR__MAX		4
# define WCHAR__MIN		1

/* bsd */
typedef unsigned char		u_char;
typedef unsigned short		u_short;
typedef unsigned int		u_int;
typedef unsigned long		u_long;

/* sysv */
typedef unsigned char		unchar;
typedef unsigned short		ushort;
typedef unsigned int		uint;
typedef unsigned long		ulong;

//	#ifndef __BIT_TYPES_DEFINED__
//#define __BIT_TYPES_DEFINED__
//
//typedef		__u8		u_int8_t;
//typedef		__s8		int8_t;
//typedef		__u16		u_int16_t;
//typedef		__s16		int16_t;
//typedef		__u32		u_int32_t;
//typedef		__s32		int32_t;
//
//#endif /* !(__BIT_TYPES_DEFINED__) */
//
//typedef		__u8		uint8_t;
//typedef		__u16		uint16_t;
//typedef		__u32		uint32_t;
//
//#if defined(__GNUC__)
//typedef		__u64		uint64_t;
//typedef		__u64		u_int64_t;
//typedef		__s64		int64_t;
//#endif



void   ft_swap(ssize_t *a, ssize_t *b);


/*
**					NUMBER <=> STRING <=> NUMBER
*/

char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);
char				*ft_itoa_base(char *c_base, int n_base, long long n);
int					ft_itostr_base(char **str, char *c_base, int n_base,
								long long n);
int					ft_itostr_ubase(char **str, char *c_base, int n_base,
								uintmax_t n);
int					ft_atoi(const char *str);
int					ft_atoi_exit(const char *stc);


char				*ft_strchr(const char *s, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strjoin_free(char *s1, char *s2);

int					ft_buffwchar (char *buff, wchar_t n);
int					ft_buffwstr(char *buff, wchar_t *str);
int					ft_buffnwstr(char *buff, wchar_t *str, int n);
char				*ft_itoa_base_buff(char *c_base, long long val,
								long long n_base, char *buff);
size_t				ft_itoa_base_gbuff(char *buff, double val, long long n_base,
								char *c_base);
size_t				ft_itoa_ubase_gbuff(char *buff,
					unsigned long long val, long long n_base, char *c_base);
char				*ft_strcat(char *dest, const char *src);
char				*ft_charcat(char *dest, char c);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t size);


/*
**					appel de fonction
*/

char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void				ft_exec_parse(int *i, char **str, void (*f)(const char *));



/*
**					STR CONVERTION
*/

char				*ft_strsub(const char *s1, unsigned int start, size_t len);
char				*ft_strtolower(char *str);
char				*ft_strtoupper(char *str);
char				*ft_strtrim(const char *s);


/*
**					MATH
*/

int					ft_min(int a, int b);
int					ft_max(int a, int b);


/*
**					IS
*/

int					ft_is_white(char c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_issign(int c);
int					ft_isspace(int i);

/*
**					
*/
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
**					COUNT
*/
size_t				ft_count_word(const char* str, const char c);
int					ft_size_base(int c, int base);
size_t				ft_strlen(const char *src);
int					ft_strlen_c_len(char *str, char a, int lenght);
int					ft_strlen_c(const char *str, char a);
int					ft_wstrlen(wchar_t *str);
int					ft_wcharlen(wchar_t c);
int					ft_nbrlen(long long nb, int n_base);

/*
**				
*/
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
int					ft_memsetblim(char *b, int c, size_t len);
int					ft_free(void **ptr);

char				*ft_charcat_lim(char *restrict s1,
									char c, size_t buff_size);
int					ft_strcatcount(char *restrict s1,
									const char *restrict s2);
int					ft_charcatcount(char *restrict s1, char c);
int					ft_strncatcount(char *s1,
					const char *restrict s2, int max_number);

/*
**					PUT
*/
void				ft_putcharuni (wchar_t nb);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putchardl(char c);

void				ft_putnbr(int n);
void				ft_putnbr_base(long long a, long long b);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr_base_fd(char *c_base, long long n_base,
									long long val, int fd);
void				ft_putnbr_unsigned_base_fd(char *c_base,
					unsigned long long n_base, unsigned long long val, int fd);
int					ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);
void				ft_print_array(int *list);


void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

char				ft_charchr(const char *s, int c);
int					ft_charchronstr(const char *listofchrstosearch,
								const char *strtosearchin);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *str);
char				*ft_strstr(const char *s1, const char *s2);

char				*ft_strtrim_c(char const *s, char c, int *size_next);

char				*ft_strcat_lim(char *restrict s1, const char *restrict s2,
									size_t buff_size);
#endif
