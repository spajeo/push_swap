# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/05 22:43:45 by fbabin            #+#    #+#              #
#    Updated: 2018/03/16 18:21:48 by spajeo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#******************************************************************************#
#                                PROG                                          #
#******************************************************************************#

CHECKER			= checker
PUSH_SWAP		= push_swap

#******************************************************************************#
#                                PATH                                          #
#******************************************************************************#

SRC			= exec ft_get_int_position ft_lst_count \
				  	ft_t_data_is_max_min_sorted ft_add_t_data_next \
					ft_get_lst_from_int ft_lst_count_lim\
					ft_t_data_is_min_max_sorted ft_add_t_pile_next \
					ft_get_pile_data ft_lst_is_max_min_sorted \
					ps_arg ft_add_t_str_next \
					ft_get_pile_position \
					ft_lst_is_min_max_sorted \
					ps_free ft_atoi_exit \
					ft_get_str_str ft_mv_inf_half ps_print \
					ft_check_ps_flags\
					ft_get_t_data_position\
					ft_next_t_data_issorted ps_refill ft_exec_ac_parse\
					ft_init_ps_head ft_print_next_data push_swap\
					ft_exec_parse ft_init_t_data_head ft_print_next_int\
					singletons ft_free_next_data\
					ft_is_data_in ft_print_next_str\
					ft_get_data_data ft_is_there_inf ft_push_swap\
					ft_get_int_abspos\
					ft_is_there_inf_int\
					ft_pushswap_operation ft_get_int_order\
					ft_is_there_inf_ref ft_t_data_free
SRC_DIR		:= ./srcs/
OBJ_DIR		:= ./objs/
INC_DIR		:=	./includes/
INC			:=	$(HEADER_DIR)/push_swap.h

LIB_DIR		:= ./libft/
LIBFT_A		:=	libft.a
LIB       := $(addsuffix Makefile, $(LIB_DIR))


CH_NAME		:= $(SRC) checker 
CH_SRC		:= $(addsuffix .c, $(addprefix $(SRC_DIR), $(CH_NAME)))
CH_OBJ		:= $(addsuffix .o, $(addprefix $(OBJ_DIR), $(CH_NAME)))

PS_NAME		:=	push_swap $(SRC)
PS_SRC		:= $(addsuffix .c, $(addprefix $(SRC_DIR), $(PS_NAME)))
PS_OBJ		:= $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PS_NAME)))

#******************************************************************************#
#                              COMMANDS                                        #
#******************************************************************************#

.PHONY: all clean fclean re libft

CC_FLAGS    := -Wall -Wextra -Werror -g -Og -O3 -Ofast

all:	$(LIB) $(CHECKER) $(PUSH_SWAP)
libft :	$(LIB_DIR) 
	make re -C $(LIB_DIR)
ch :	$(CHECKER)
ps :	$(PUSH_SWAP)

#******************************************************************************#
#                          CHECKER & PUSH_SWAP                                 #
#******************************************************************************#

$(CHECKER): .ch_done # $(CH_OBJ) 
		ar rc $(CH_SRC) $(CH_OBJ)
		echo "\033[0;34m""created   : $(CH_SRC)""\033[m"
		ranlib $(CH_SRC)
		echo "\033[1;34m""sorted    : $(CH_SRC)""\033[m"

$(PUSH_SWAP):.ne  #$(PS_OBJ)
		ar rc $(PS_SRC) $(PS_OBJ)
		echo "\033[0;34m""created   : $(PS_SRC)""\033[m"
		ranlib $(PS_SRC)
		echo "\033[1;34m""sorted    : $(PS_SRC)""\033[m"

$(LIB):
		make -C $(LIB_DIR)
$(LIB_DIR) :
	git clone https://github.com/spajeo/libft.git

#******************************************************************************#
#                                PATH                                          #
#******************************************************************************#
.ps_done: $(PS_OBJ)
	 @echo "au" > $@
	 @echo ""
	 @echo "\033[0;33m""created   : push_swap objet(s)""\033[m"

.ch_done: $(CH_OBJ)
	 @echo "au" > $@
	 @echo ""
	 @echo "\033[0;33m""created   : checker objet(s)""\033[m"



#******************************************************************************#
#                              OBJ_DIR                                         #
#******************************************************************************#

$(CH_OBJ)%.o: $(SRC_DIR)$(CH_NAME)%.c $(INC) $(LIB)
	mkdir -p $(OBJ_DIR) 2> /tmp/a.del
	gcc $(CC_FLAGS) -o $@ -c $< -I$(INC_DIR) -I$(LIB_DIR)
	echo "\033[1;36m✔ \033[m\c"

#$(OBJ_DIR)%.o: $(NBR_DIR)%.c $(INC)
#	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
#	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
#	@echo "\033[1;36m✔ \033[m\c"

#$(OBJ_DIR)%.o: $(STR_DIR)%.c $(INC)
#	@mkdir -p $(OBJ_DIR) 2> /tmp/a.del
#	@gcc $(CC_FLAGS) -o $@ -c $< -I./includes/
#	@echo "\033[1;36m✔ \033[m\c"


#******************************************************************************#
#                            CLEAN & NORM                                      #
#******************************************************************************#
clean:
		@make fclean -C $(LIB_DIR)
		@/bin/rm -f $(C_OBJS) $(PS_OBJS)
		@echo "push_swap clean : $(_GREEN)Done$(_END)"

fclean: clean
		@/bin/rm -f $(CHECKER) $(PUSH_SWAP)
		@echo "push_swap fclean : $(_GREEN)Done$(_END)"

re:
		@make fclean
		@make

.PHONY: all clean fclean re
