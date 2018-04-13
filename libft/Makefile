# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/15 16:47:18 by spajeo            #+#    #+#              #
#    Updated: 2018/04/06 18:40:10 by spajeo           ###   ########.fr        #
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
				./includes/linux_compiler.h \
				./includes/push_swap.h

INCLUDES := -I./includes

STR_DIR := ./str/
NBR_DIR := ./nbr/
LST_DIR := ./lst/
LIB_DIR := ./lib/
IS_DIR := ./is/
PRINTF_DIR := ./ft_printf/
PUSH_SWAP_DIR := ./push_swap/

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
		lst_move_node_before lstadd lstdel lstdelone lstiter lstmap lstnew \
		lst_is_min_max_sorted lst_is_max_min_sorted ft_t_data_is_max_min_sorted \
		get_pile_data  get_lst_from_int get_pile_position  get_int_position \
		lst_count lst_count_lim t_data_is_min_max_sorted \
		is_there_inf get_int_abspos  print_next_str get_t_data_position add_t_pile_next get_str_str
LST_SRC := $(addsuffix .c, $(addprefix $(LST_DIR)ft_, $(LST)))
LST_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(LST)))

PRINTF:=	buff_charstr buff_val ft_pr_buffnwstr ft_pr_buffwstr ft_pr_charcat ft_pr_itoa_ubase_gbuff \
		ft_pr_memsetblim ft_pr_strcatcount ft_pr_strncatcount ft_printf initialisation \
		parsing ptr_char ptr_flag ptr_nbr
PRINTF_SRC := $(addsuffix .c, $(addprefix $(PRINTF_DIR), $(PRINTF)))
PRINTF_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PRINTF)))

LIB := buffnwstr buffwchar buffwstr bzero charcat charcat_lim charcatcount charcatcount_glim \
		charchr charchronstr exec_parse free max memalloc memccpy memchr memcmp memcpy memdel \
		memmove memset memsetblim min nbrlen print_array putchar putchar_fd putchardl \
		putcharuni putendl putendl_fd putnbr \
		putnbr_base putnbr_base_fd putnbr_fd putnbr_unsigned_base_fd putstr \
		putstr_fd tolower toupper wcharlen wstrlen wstrlen_conv get_next_line
LIB_SRC := $(addsuffix .c, $(addprefix $(LIB_DIR)ft_, $(LIB)))
LIB_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(LIB)))

IS :=     is_white isalnum isalpha isascii isdigit islower isprint issign isspace isupper
IS_SRC := $(addsuffix .c, $(addprefix $(IS_DIR)ft_, $(IS)))
IS_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR)ft_, $(IS)))

PUSH_SWAP:=\
			ps_arg ft_add_t_str_next \
			ps_free ft_ps_atoi_exit ft_mv_inf_half ps_print \
			ft_check_ps_flags ft_ps_next_t_data_issorted ps_refill ft_exec_ac_parse\
			ft_init_ps_head ft_print_next_data ft_exec_parse_ps ft_init_t_data_head ft_print_next_int\
			singletons ft_free_next_data ft_is_data_inft_get_t_data_data\
			 ft_ps_convert_argv ft_ps_pushswap_operation\
			ft_ps_exec_p ft_ps_exec_s ft_ps_exec_rr ft_ps_exec_r \
			ft_pushswap_opp ft_pushswap_ops ft_pushswap_oprr ft_pushswap_opr \
			ft_is_there_inf_int ft_get_int_order ft_is_there_inf_ref ft_t_data_free
PUSH_SWAP_SRC := $(addsuffix .c, $(addprefix $(PUSH_SWAP_DIR), $(PUSH_SWAP)))
PUSH_SWAP_OBJ := $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PUSH_SWAP)))

OBJ :=  $(PUSH_SWAP_OBJ) $(STR_OBJ) $(NBR_OBJ) $(LST_OBJ) $(LIB_OBJ) $(IS_OBJ) $(PRINTF_OBJ)
SRC := $(PUSH_SWAP_SRC) $(STR_SRC) $(NBR_SRC) $(LST_SRC) $(LIB_SRC) $(IS_SRC) $(PRINTF_SRC)

#***************************************************************************************************************#
#                                                 PATH 	                                                    	#
#***************************************************************************************************************#

FLAGS	:= -Wall -Wextra -Werror -g -Og -O3 -Ofast

all : $(NAME)

$(NAME): $(OBJ_DIR) $(LST_OBJ) $(PUSH_SWAP_OBJ) $(STR_OBJ) $(NBR_OBJ) $(IS_OBJ) $(LIB_OBJ) $(PRINTF_OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\033[0;37m""\ncreated   : $(NAME)""\033[m"
	@ranlib $(NAME)
	@echo "\033[1;31m""sorted    : $(NAME)""\033[m"

#***************************************************************************************************************#
#                                               OBJ_DIR                                                     	#
#***************************************************************************************************************#

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del

$(OBJ_DIR)%.o: $(STR_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;31mㅋ\033[m\c"

$(OBJ_DIR)%.o: $(NBR_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;37mㅋ\033[m\c"

$(OBJ_DIR)%.o: $(IS_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;31mㅋ\033[m\c"

$(OBJ_DIR)%.o: $(LST_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;31mㅋ\033[m\c"

$(OBJ_DIR)%.o: $(LIB_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;31mㅋ\033[m\c"

$(OBJ_DIR)%.o: $(PRINTF_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;31mㅋ\033[m\c"

$(OBJ_DIR)%.o: $(PUSH_SWAP_DIR)%.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I./includes/
	@echo "\033[1;37mㅋ\033[m\c"

#***************************************************************************************************************#
#                                              CLEAN & NORM                                                    	#
#***************************************************************************************************************#

clean:
	@rm -rfd $(OBJ)
	@rm -rfd $(OBJ_DIR)

fclean: clean
	@rm -rfv $(NAME)

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

.PHONY: all clean fclean re
