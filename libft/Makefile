# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spajeo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/15 16:47:18 by spajeo            #+#    #+#              #
#    Updated: 2018/03/15 19:08:34 by spajeo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#*******************************************************************************#
#                               NAME                                          	#
#*******************************************************************************#
NAME				:= libftprintf.a
INC			:= includes/color.h \
	includes/ft_printf.h \
	includes/get_next_line.h \
	includes/libft.h \
	includes/liblst.h \
	includes/linux_compiler.h 
SRCS_NAME			:= ft_is_white.c

#str/ft_strcat.c \
#	str/ft_strcat_lim.c \
	str/ft_strcatcount.c \
	str/ft_strchr.c \
	str/ft_strclr.c \
	str/ft_strcmp.c \
	str/ft_strcpy.c \
	str/ft_strdel.c \
	str/ft_strdup.c \
	str/ft_strequ.c \
	str/ft_striter.c \
	str/ft_striteri.c \
	str/ft_strjoin.c \
	str/ft_strjoin_free.c \
	str/ft_strlcat.c \
	str/ft_strlen.c \
	str/ft_strlen_c.c \
	str/ft_strlen_c_len.c \
	str/ft_strlen_int.c \
	str/ft_strmap.c \
	str/ft_strmapi.c \
	str/ft_strncat.c \
	str/ft_strncatcount.c \
	str/ft_strncmp.c \
	str/ft_strncpy.c \
	str/ft_strnequ.c \
	str/ft_strnew.c \
	str/ft_strnstr.c \
	str/ft_strrchr.c \
	str/ft_strsplit.c \
	str/ft_strstr.c \
	str/ft_strsub.c \
	str/ft_strtrim.c \
	str/ft_strtrim_c.c \
	\
	nbr/ft_atoi.c \
	nbr/ft_atoi_exit.c \
	nbr/ft_count_words.c \
	nbr/ft_itoa.c \
	nbr/ft_itoa_base.c \
	nbr/ft_itoa_base_buff.c \
	nbr/ft_itoa_base_gbuff.c \
	nbr/ft_itoa_ubase.c \
	nbr/ft_itoa_ubase_buff.c \
	nbr/ft_itoa_ubase_gbuff.c \
	nbr/ft_itostr_ubase.c \
	nbr/ft_swap.c \
	\
	lst/ft_is_double_data_next.c \
	lst/ft_lst_add_after.c \
	lst/ft_lst_add_before.c \
	lst/ft_lst_disconnect.c \
	lst/ft_lst_empty.c \
	lst/ft_lst_move_node_after.c \
	lst/ft_lst_move_node_before.c \
	lst/ft_lstadd.c \
	lst/ft_lstdel.c \
	lst/ft_lstdelone.c \
	lst/ft_lstiter.c \
	lst/ft_lstmap.c \
	lst/ft_lstnew.c \
	\
	lib/ft_buffnwstr.c \
	lib/ft_buffwchar.c \
	lib/ft_buffwstr.c \
	lib/ft_bzero.c \
	lib/ft_charcat.c \
	lib/ft_charcat_lim.c \
	lib/ft_charcatcount.c \
	lib/ft_charcatcount_glim..c \
	lib/ft_charchr.c \
	lib/ft_charchronstr.c \
	lib/ft_exec_parse.c \
	lib/ft_free.c \
	lib/ft_max.c \
	lib/ft_memalloc.c \
	lib/ft_memccpy.c \
	lib/ft_memchr.c \
	lib/ft_memcmp.c \
	lib/ft_memcpy.c \
	lib/ft_memdel.c \
	lib/ft_memmove.c \
	lib/ft_memset.c \
	lib/ft_memsetblim.c \
	lib/ft_min.c \
	lib/ft_nbrlen.c \
	lib/ft_print_array.c \
	lib/ft_putchar.c \
	lib/ft_putchar_fd.c \
	lib/ft_putchardl.c \
	lib/ft_putcharuni.c \
	lib/ft_putendl.c \
	lib/ft_putendl_fd.c \
	lib/ft_putnbr.c \
	lib/ft_putnbr_base.c \
	lib/ft_putnbr_base_fd.c \
	lib/ft_putnbr_fd.c \
	lib/ft_putnbr_unsigned_base_fd.c \
	lib/ft_putstr.c \
	lib/ft_putstr_fd.c \
	lib/ft_tolower.c \
	lib/ft_toupper.c \
	lib/ft_wcharlen.c \
	lib/ft_wstrlen.c \
	lib/ft_wstrlen_conv.c \
	lib/get_next_line.c \
	\
	is/ft_is_white.c \
	is/ft_isalnum.c \
	is/ft_isalpha.c \
	is/ft_isascii.c \
	is/ft_isdigit.c \
	is/ft_islower.c \
	is/ft_isprint.c \
	is/ft_issign.c \
	is/ft_isspace.c \
	is/ft_isupper.c \
	\
	ft_printf/buff_charstr.c \
	ft_printf/uff_val.c \
	ft_printf/t_pr_buffnwstr.c \
	ft_printf/t_pr_buffwstr.c \
	ft_printf/t_pr_charcat.c \
	ft_printf/t_pr_itoa_ubase_gbuff.c \
	ft_printf/t_pr_memsetblim.c \
	ft_printf/t_pr_strcatcount.c \
	ft_printf/t_pr_strncatcount.c \
	ft_printf/t_printf.c \
	ft_printf/nitialisation.c \
	ft_printf/arsing.c \
	ft_printf/tr_char.c \
	ft_printf/tr_flag.c \
	ft_printf/tr_nbr.c 


#SRC			=	$(addprefix $(SRC_PATH)/,$(SRC_FILES))

#SRC_FILES		:= str
OBJ_PATH 		= ./obj
OBJ				= $(addprefix $(OBJ_PATH)/,$(SRCS_NAME:.c=.o))


#***************************************************************************************************************#
#                                                 PATH 	                                                    	#
#***************************************************************************************************************#

all : $(NAME)
	echo "$(NAME) : $(_RED)Done$(_END)"
#	mkdir -p  $(OBJ_PATH) 

$(OBJ_PATH)/%.o:# %.c
#	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -I $(INC) -o $@ -c $<


$(NAME): $(OBJ)
	mkdir -p $(OBJ_PATH)#/$(SRC_FILES)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) : $(_GREEN)Done$(_END)"

# Compiler and shell
CFLAGS				:= -Werror -Wall -Wextra -g
FLAG				:= -Wall -Wextra -Werror -g -Og -O3 -Ofast 


#***************************************************************************************************************#
#                                              AUTOMATION                                                     	#
#***************************************************************************************************************#


#OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
#HEADER = $(addprefix $(HEADER_PATH)/,$(HEADER_NAME))

#all : $(NAME)
#$(NAME) : $(OBJ)
#	@echo "\033[40;38;5;82m LIBFT DONE \033[0m"
#	ar rc $(NAME) $(OBJ)
#ranlib $(NAME)

clean:
	@rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@rm -rf $(NAME)
	@rm -rf obj

re : fclean all

.PHONY: all, clean, fclean, re

norme:
	norminette $(SRC)
	norminette $(INC_PATH) %.h
