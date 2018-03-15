/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 21:37:45 by spajeo            #+#    #+#             */
/*   Updated: 2017/08/14 10:48:48 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

//#define BUFF_SIZE 512

# define FLAG_LEFT		(unsigned long)0x1
# define FLAG_PLUS		(unsigned long)0x2
# define FLAG_ZERO		(unsigned long)0x4
# define FLAG_SPACE		(unsigned long)0x8
# define FLAG_PREF		(unsigned long)0x10
# define FLAG_PAD		(unsigned long)0x20
# define FLAG_PREC		(unsigned long)0x40
# define FLAG_FIN		(unsigned long)0x80
# define FLAG_NEG		(unsigned long)0x100
# define FLAG_TRANS		(unsigned long)0x10000

# define FORMAT			(unsigned long)0x3FFFC00
# define FORMAT_PERC	(unsigned long)0x3FFFD00

# define LETTER			(unsigned long)0x3c00
# define FLAG_MC		(unsigned long)0x400
# define FLAG_C			(unsigned long)0x800
# define FLAG_CMC		(unsigned long)0xC00
# define FLAG_MS 		(unsigned long)0x1000
# define FLAG_S			(unsigned long)0x2000
# define FLAG_SMS		(unsigned long)0x3000

# define NUMBER			(unsigned long)0x3FFC000

# define SIGNED 		(unsigned long)0x1C000
# define FLAG_LMD		(unsigned long)0x20004000
# define FLAG_MD		(unsigned long)0x4000
# define FLAG_D			(unsigned long)0x8000
# define FLAG_I			(unsigned long)0x10000

# define UNSIGNED		(unsigned long)0x3FE0000
# define UNSIGNED_MAJ	(unsigned long)0xAA0000
# define UNSIGNED_MIN	(unsigned long)0x3540000
# define FLAG_UMU		(unsigned long)0x60000

# define FLAG_LMU		(unsigned long)0x20020000
# define FLAG_MU		(unsigned long)0x20000
# define FLAG_U			(unsigned long)0x40000
# define FLAG_XMXP		(unsigned long)0x2180000
# define FLAG_XMX		(unsigned long)0x180000
# define FLAG_LMX		(unsigned long)0x20080000
# define FLAG_MX		(unsigned long)0x80000
# define FLAG_X			(unsigned long)0x100000
# define FLAG_FULL_P	(unsigned long)0x82000010
# define FLAG_P			(unsigned long)0x2000000
# define FLAG_OMO		(unsigned long)0x600000
# define FLAG_LMO		(unsigned long)0x20200000
# define FLAG_MO		(unsigned long)0x200000
# define FLAG_O			(unsigned long)0x400000
# define FLAG_BMB		(unsigned long)0x1800000
# define FLAG_LMB		(unsigned long)0x20800000
# define FLAG_MB		(unsigned long)0x800000
# define FLAG_B			(unsigned long)0x1000000

# define FLAG_PERC		(unsigned long)0x100
# define FLAG_NULL		(unsigned long)0x200

# define FLAG_FLAGGED	(unsigned long)0xFCCC000000
# define FLAG_J			(unsigned long)0x4000000
# define FLAG_H			(unsigned long)0x8000000
# define FLAG_HH		(unsigned long)0x10000000
# define FLAG_L			(unsigned long)0x20000000
# define FLAG_LL		(unsigned long)0x40000000
# define FLAG_Z			(unsigned long)0x80000000

# define PAD			g_pr.padding
# define PREC			g_pr.precision
# define VAL			g_pr.val
# define UVAL			g_pr.uval
# define BASE			g_pr.base
# define PREF			g_pr.prefixe
# define VAR			g_pr.var
# define BASE_B			"0123456789ABCDEF"
# define BASE_S			"0123456789abcdef"
# define BASE_10		"0123456789"
# define FLAG			g_flag
# define BUFF			g_buff
# define B_LEN			g_blen
# define BUFF_OFF		g_empty_buff
# define CHECK_BUFF_LIM(x) if ((B_LEN + x + 1) > BUFF_SIZE) ft_empty_buff(x)
# define FIRST_STEP		(g_total == -1 || BUFF_OFF) ?
# define SECOND_STEP	(BUFF_OFF = 1) : (BUFF_OFF = (g_total = 0))
# define CHECK_INTRO	FIRST_STEP SECOND_STEP

typedef void			(*t_ftpformat)(unsigned long, va_list);

typedef struct			s_michael
{
	int					padding;
	int					precision;
	intmax_t			val;
	uintmax_t			uval;
	int					base;
	char				prefixe[4];
	wchar_t				var;
}						t_format;

typedef struct			s_ft_format
{
	const char			c;
	t_ftpformat			f;
	unsigned long		flag;
}						t_ft_format;

typedef struct			s_flag
{
	const char			c;
	void				(*func)(unsigned long);
	unsigned long		flag;
}						t_ft_flag;

char					g_buff[512];
unsigned long			g_flag;
int						g_total;
int						g_blen;
int						g_empty_buff;
t_format				g_pr;

void					ft_ptrsformat_fs (unsigned long flag, va_list arg);
void					ft_ptrsformat_fws (unsigned long flag, va_list arg);
void					ft_ptrsformat_fc(unsigned long flag, va_list arg);
void					ft_ptrsformat_fwc(unsigned long flag, va_list arg);
void					ft_ptrsformat_fi(unsigned long flag, va_list arg);
void					ft_ptrsformat_fu(unsigned long flag, va_list arg);
void					ft_ptrsformat_fmu(unsigned long flag, va_list arg);
void					ft_ptrsformat_f(unsigned long flag);
void					ft_ptrsformat(unsigned long flag);
void					ft_ptrsformat_l(unsigned long flag);
void					ft_ptrsformat_ll(unsigned long flag);
void					ft_ptrsformat_h(unsigned long flag);
void					ft_ptrsformat_fin(unsigned long flag);

size_t					ft_pr_itoa_ubase_gbuff(unsigned long long val,
												long long n_base, char *c_base);
int						ft_pr_memsetblim(int c, size_t len);
int						ft_pr_strncatcount(const char *s2, size_t n);
int						ft_wstrlen_conv(wchar_t *str);
int						ft_pr_buffwstr(wchar_t *str);
int						ft_pr_buffnwstr(wchar_t *str, int n);
int						ft_pr_strcatcount(const char *restrict s2);
void					ft_pr_charcat(void);

void					ft_printing_uvalmaj(void);
void					ft_printing_uval(void);
void					ft_printing_val(void);
void					ft_printing_str(va_list args);
void					ft_printing_wstr(wchar_t *str);
void					ft_printing_char(void);
void					ft_printing_wchar(va_list argument);
int						ft_print_var(const char *c, va_list argument);
void					ft_empty_buff();

void					ft_flagg(void);
int						ft_padding(const char *c);
int						ft_precision(const char *c);
void					ft_counting(void);
void					ft_ucounting(void);
void					ft_print_padding(void);
void					ft_print_prefixe(void);
int						ft_fin_conv(void);
void					ft_get_value(va_list argument);
void					ft_get_uvalue(va_list argument);
void					ft_get_char_value(va_list argument);
void					ft_format_free(void);

int						ft_printf(const char *format, ...);
int						ft_isformat(char c);
int						ft_isformatchar(char c);
int						ft_info_collection(char *c, va_list argument);
void					ft_format_init(void);

static					t_ft_format g_flist[] =
{
	{'s', &ft_ptrsformat_fs, FLAG_S},
	{'S', &ft_ptrsformat_fws, FLAG_MS},
	{'c', &ft_ptrsformat_fc, FLAG_C},
	{'C', &ft_ptrsformat_fwc, FLAG_MC},
	{'%', &ft_ptrsformat_fc, FLAG_PERC},
	{'d', &ft_ptrsformat_fi, FLAG_D},
	{'D', &ft_ptrsformat_fi, FLAG_LMD},
	{'i', &ft_ptrsformat_fi, FLAG_I},
	{'B', &ft_ptrsformat_fmu, FLAG_LMB},
	{'b', &ft_ptrsformat_fu, FLAG_B},
	{'X', &ft_ptrsformat_fmu, FLAG_MX},
	{'x', &ft_ptrsformat_fu, FLAG_X},
	{'p', &ft_ptrsformat_fu, FLAG_FULL_P},
	{'U', &ft_ptrsformat_fmu, FLAG_LMU},
	{'u', &ft_ptrsformat_fu, FLAG_U},
	{'O', &ft_ptrsformat_fmu, FLAG_LMO},
	{'o', &ft_ptrsformat_fu, FLAG_O},
	{0, NULL, 0}
};

static		t_ft_flag g_flags[] =
{
	{'#', &ft_ptrsformat, FLAG_PREF},
	{'+', &ft_ptrsformat, FLAG_PLUS},
	{' ', &ft_ptrsformat, FLAG_SPACE},
	{'-', &ft_ptrsformat, FLAG_LEFT},
	{'0', &ft_ptrsformat, FLAG_ZERO},
	{'h', &ft_ptrsformat_h, FLAG_H},
	{'l', &ft_ptrsformat_l, FLAG_L},
	{'L', &ft_ptrsformat_ll, FLAG_LL},
	{'j', &ft_ptrsformat, FLAG_J},
	{'z', &ft_ptrsformat, FLAG_Z},
	{'\0', &ft_ptrsformat, FLAG_FIN},
	{0, NULL, 0}
};

#endif
