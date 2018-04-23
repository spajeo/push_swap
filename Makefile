

#******************************************************************************#
#                                PROG                                          #
#******************************************************************************#

CHECKER			= ./checker
PUSH_SWAP		= ./push_swap

#******************************************************************************#
#                                PATH                                          #
#******************************************************************************#

SRC_PATH	:=  ./srcs/

LIB_PATH	:=  ./libft
LIBFT_A		:=  ./libft/libft.a

CH_NAME		:=  checker
CH_SRC		:=  $(SRC_PATH)checker.c
CH_OBJ  	:=  $(SRC_PATH)checker.o

PS_NAME		:=	push_swap
PS_SRC		:=	$(SRC_PATH)push_swap.c
PS_OBJ      :=	$(SRC_PATH)push_swap.o

#******************************************************************************#
#                              COMMANDS                                        #
#******************************************************************************#

FLAGS    	:= -Wall -Wextra -Werror -g -Og -O3 -Ofast

SANITIZE    := -g3 -fsanitize=address

all 		: $(PUSH_SWAP) $(CHECKER)

$(PUSH_SWAP) : 	$(PS_OBJ) $(LIBFT_A)
				@make  -C $(LIB_PATH)
				@$(CC) -o push_swap $(PS_OBJ) $(FLAGS) -L $(LIB_PATH) -lft
				@rm -f $(PS_OBJ)
				@echo "\033[1;37mdone : push_swap\n\033[m\c"

$(CHECKER) : 	$(CH_OBJ) $(LIBFT_A)
				@make  -C $(LIB_PATH)
				@$(CC) -o checker $(CH_OBJ) $(FLAGS) -L $(LIB_PATH) -lft
				@rm -f $(CH_OBJ)
				@echo "\033[1;31mdone : checker\n\033[m\c"

%.o: %.c #$(LIBFT_A)
				@gcc -o $@ -c $< $(FLAGS) -I $(LIB_PATH)/includes

$(LIBFT_A) :
	@make  -C $(LIB_PATH)

$(LIB_PATH) :
	git clone https://github.com/spajeo/libft.git

#******************************************************************************#
#                            CLEAN & NORM                                      #
#******************************************************************************#

clean:
	@rm -rf $(PS_OBJ)
	@rm -rf $(CH_OBJ)

fclean: clean
	@rm -rf $(PUSH_SWAP)
	@rm -rf $(CHECKER)

libre :
	@make -C $(LIB_PATH)/ re

re : libre fclean all

.PHONY: all clean fclean re
