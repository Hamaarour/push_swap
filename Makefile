# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 14:48:46 by hamaarou          #+#    #+#              #
#    Updated: 2023/01/23 14:48:52 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME=push-swap
CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC= lib/ft_atoi.c \
	lib/ft_lstadd_back.c lib/ft_lstadd_front.c lib/ft_lstnew.c lib/ft_lstsize.c  \
	push/swap.c push/swap_a.c push/swap_b.c push/reverseList.c push/rotate_a.c push/rotate_b.c push/rr.c push/rra.c push/rrb.c push/rrr.c\
	utils/push_to_stack.c \
	push_swap.c


OBJ= $(SRC:.c=.o)

all:$(NAME)

.PHONY= all clean fclean re

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all