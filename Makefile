

#******************************************************************************#
#                                PROG                                          #
#******************************************************************************#

CHECKER			= checker
PUSH_SWAP		= push_swap

#******************************************************************************#
#                                PATH                                          #
#******************************************************************************#

SRC_DIR		:=  ./srcs/
OBJ_DIR	    :=  ./objs
PS_OBJ_DIR	:=  ./objs/ps/
CH_OBJ_DIR	:=  ./objs/ch/
INC_DIR		:=  ./includes/
PS_INC		:=  ./includes/push_swap.h

LIB_DIR		:=  ./libft#/includes
LIBFT_A		:=  ./libft/libft.a
LIB         :=  $(addsuffix Makefile, $(LIB_DIR)/includes)

CH_NAME		:=  checker
CH_SRC		:=  $(addsuffix .c, $(addprefix $(SRC_DIR), $(CH_NAME)))
CH_OBJ		:=  $(addsuffix .o, $(addprefix $(OBJ_DIR), $(CH_NAME)))

PS_NAME		:=	push_swap
PS_SRC		:=  $(addsuffix .c, $(addprefix $(SRC_DIR), $(PS_NAME)))
PS_OBJ		:=  $(addsuffix .o, $(addprefix $(OBJ_DIR), $(PS_NAME)))

#******************************************************************************#
#                              COMMANDS                                        #
#******************************************************************************#

.PHONY: all clean fclean re libft

# Create objs directory and all subdirectories
$(shell mkdir -p $(OBJS_DIR))
$(shell mkdir -p $(CH_OBJS_DIR))
$(shell mkdir -p $(PS_OBJS_DIR))

CC_FLAGS    := -Wall -Wextra -Werror -g -Og -O3 -Ofast

all :
#    make $(PUSH_SWAP)

libft :	$(LIB_DIR)
	make  -C $(LIB_DIR)

#******************************************************************************#
#                          CHECKER & PUSH_SWAP                                 #
#******************************************************************************#

#$(LIB):
#		make -C $(LIB_DIR)
#$(LIB_DIR) :
#	git clone https://github.com/spajeo/libft.git

#******************************************************************************#
#                                DONE                                          #
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

#$(CH_OBJ_DIR)%.o: $(SRC_DIR)#$(CH_NAME)%.c $(INC) $(LIB)
#	$(CC) $(CC_FLAGS) -o $@ -c $< -I$(INC_DIR) -I$(LIB_DIR)
#	echo "\033[1;36m✔ \033[m\c"

$(PUSH_SWAP) : $(PS_OBJ)
		#$(foreach i,$(shell echo "$(LIB)"),make -C "$(LIBS)/$(i)";)
		$(CC) $(CC_FLAGS) -o $@ $(PS_INC) $(PS_OBJ) $(LIBFT_A)
		printf $(CLEAR) && $(PRINT_OK) $(NAME)

$(PS_OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CC_FLAGS) -o $@ -c $< -I$(INC_DIR) -I$(LIB_DIR)
	echo "\033[1;36m✔ \033[m\c"

#******************************************************************************#
#                            CLEAN & NORM                                      #
#******************************************************************************#
clean:
		@make fclean -C $(LIB_DIR)
		@/bin/rm -f $(C_OBJS) $(PS_OBJS)
		@echo "push_swap clean : $(_GREEN)Done$(_END)"

fclean: clean

re:
		@make fclean
		@make

