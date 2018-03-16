# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spajeo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/15 16:47:18 by spajeo            #+#    #+#              #
#    Updated: 2018/03/16 16:53:39 by spajeo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#*******************************************************************************#
#                               NAME                                          	#
#*******************************************************************************#
NAME				:= libft.a

OBJ_DIR := ./objs/

INC			:= ./includes/color.h \
				./includes/ft_printf.h \
				./includes/get_next_line.h \
				./includes/libft.h \
				./includes/liblst.h \
				./includes/linux_compiler.h 

INCLUDES := -I./includes

STR_DIR := ./str/
NBR_DIR := ./nbr/
LST_DIR := ./lst/
LIB_DIR := ./lib/
IS_DIR := ./is/
PRINTF_DIR := ./ft_printf/


STR := strcat strcat_lim strcatcount strchr strclr strcmp strcpy strdel strdup strequ striter striteri \
		strjoin strjoin_free strlcat strlen strlen_c strlen_c_len strlen_int strmap strmapi strncat \
		strncatcount strncmp strncpy strnequ strnew strnstr strrchr strsplit strstr strsub strtrim strtrim_c 
STR_SRC := $(addsuffix .c, $(addprefix $(STR_DIR)ft_, $(STR)))
STR_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(STR)))

NBR := atoi atoi_exit count_words itoa itoa_base itoa_base_buff itoa_base_gbuff \
		itoa_ubase itoa_ubase_buff itoa_ubase_gbuff itostr_ubase swap 
NBR_SRC := $(addsuffix .c, $(addprefix $(NBR_DIR)ft_, $(NBR)))
NBR_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(NBR)))

LST := is_double_data_next lst_add_after lst_add_before lst_disconnect lst_empty lst_move_node_after \
		lst_move_node_before lstadd lstdel lstdelone lstiter lstmap lstnew 
LST_SRC := $(addsuffix .c, $(addprefix $(LST_DIR)ft_, $(LST)))
LST_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(LST)))
	
LIB := buffnwstr buffwchar buffwstr bzero charcat charcat_lim charcatcount charcatcount_glim \
		charchr charchronstr exec_parse free max memalloc memccpy memchr memcmp memcpy memdel \
		memmove memset memsetblim min nbrlen print_array putchar putchar_fd putchardl \
		putcharuni putendl putendl_fd putnbr \
		putnbr_base putnbr_base_fd putnbr_fd putnbr_unsigned_base_fd putstr \
		putstr_fd tolower toupper wcharlen wstrlen wstrlen_conv get_next_line 
LIB_SRC := $(addsuffix .c, $(addprefix $(LIB_DIR)ft_, $(LIB)))
LIB_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(LIB)))
	
IS :=	is_white isalnum isalpha isascii isdigit islower isprint issign isspace isupper
IS_SRC := $(addsuffix .c, $(addprefix $(IS_DIR)ft_, $(IS)))
IS_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(IS)))
	
PRINTF:=	buff_charstr buff_val ft_pr_buffnwstr ft_pr_buffwstr ft_pr_charcat ft_pr_itoa_ubase_gbuff \
		ft_pr_memsetblim ft_pr_strcatcount ft_pr_strncatcount ft_printf initialisation \
		parsing ptr_char ptr_flag ptr_nbr 
PRINTF_SRC := $(addsuffix .c, $(addprefix $(PRINTF_DIR), $(PRINTF)))
PRINTF_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PRINTF)))

OBJ := $(STR_OBJ) $(NBR_OBJ) $(LST_OBJ) $(LIB_OBJ) $(IS_OBJ) $(PRINTF_OBJ)
SRC := $(STR_SRC) $(NBR_SRC) $(LST_SRC) $(LIB_SRC) $(IS_SRC) $(PRINTF_SRC)
DONE := .str_done .nbr_done .lst_done .lib_done .is_done .print_done

#***************************************************************************************************************#
#                                                 PATH 	                                                    	#
#***************************************************************************************************************#

.PHONY: all clean fclean re

CC_FLAGS	:= -Wall -Wextra -Werror -g -Og -O3 -Ofast

all : $(NAME)

$(NAME): $(DONE)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[0;34m""created   : $(NAME)""\033[m"
	@ranlib $(NAME)
	@echo "\033[1;34m""sorted    : $(NAME)""\033[m"

#***************************************************************************************************************#
#                                              AUTOMATION                                                     	#
#***************************************************************************************************************#

.str_done: $(STR_OBJ)
	@echo "au" > $@
	@echo ""
	@echo "\033[0;33m""created   : str objet(s)""\033[m"

.nbr_done: $(NBR_OBJ)
	@echo "au" > $@
	@echo ""
	@echo "\033[0;33m""created   : nbr objet(s)""\033[m"

.is_done: $(IS_OBJ)
	@echo "au" > $@
	@echo ""
	@echo "\033[0;33m""created   : is objet(s)""\033[m"

.lib_done: $(LIB_OBJ)
	@echo "au" > $@
	@echo ""
	@echo "\033[0;33m""created   : lib objet(s)""\033[m"

.lst_done: $(LST_OBJ)
	@echo "au" > $@
	@echo ""
	@echo "\033[0;33m""created   : lst objet(s)""\033[m"

.print_done: $(PRINTF_OBJ)
	@echo "au" > $@
	@echo ""
	@echo "\033[0;33m""created   : print objet(s)""\033[m"

#***************************************************************************************************************#
#                                               OBJ_DIR                                                     	#
#***************************************************************************************************************#

$(OBJ_DIR)%.o: $(STR_DIR)%.c $(INC)
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;36m✔ \033[m\c"

$(OBJ_DIR)%.o: $(NBR_DIR)%.c $(INC)
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;36m✔ \033[m\c"

$(OBJ_DIR)%.o: $(IS_DIR)%.c $(INC)
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;36m✔ \033[m\c"

$(OBJ_DIR)%.o: $(LST_DIR)%.c $(INC)
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;36m✔ \033[m\c"

$(OBJ_DIR)%.o: $(LIB_DIR)%.c $(INC)
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;36m✔ \033[m\c"

$(OBJ_DIR)%.o: $(PRINTF_DIR)%.c $(INC)
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;36m✔ \033[m\c"

#***************************************************************************************************************#
#                                              CLEAN & NORM                                                    	#
#***************************************************************************************************************#

clean:
	@echo "\033[31m""\c"
	@rm -fv a.out | column
	@echo "\033[0;35m""\c"
	@rm -fv $(OBJ) | column
	@echo "\033[7m""\c"
	@rm -fv $(DONE) | column
	@echo "\033[0;35m""\c"
ifneq ($(OBJ_DIR), ./)
	@rm -fdv $(OBJ_DIR)
endif

fclean: clean
	@echo "\033[1;35m""\c"
	@rm -fv $(NAME)
	@echo "\033[m""\c"

re : fclean all

norme:
	@echo "\033[1;37m""norminette on ./libft/*.c"
	@norminette $(SRC)                                   \
		| sed ''s/Error/`echo "\033[0;31mError"`/g''     \
		| sed ''s/Warning/`echo "\033[0;33mWarning"`/g'' \
		| sed ''s/Norme/`echo "\033[1;32mNorme"`/g''
	@norminette libft.h                                  \
		| sed ''s/Error/`echo "\033[0;31mError"`/g''     \
		| sed ''s/Warning/`echo "\033[0;33mWarning"`/g'' \
		| sed ''s/Norme/`echo "\033[1;32;7mNorme"`/g''
	@echo "\033[m""\c"
