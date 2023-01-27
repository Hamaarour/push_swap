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
	push/sa.c \
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