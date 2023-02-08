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


NAME=push_swap
CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC=ft_printf/count_nbr.c ft_printf/ft_putchar.c ft_printf/ft_putnbr.c ft_printf/ft_putstr.c ft_printf/ft_putnbr_hex.c ft_printf/ft_printf.c \
	lib/ft_atoi.c lib/ft_calloc.c lib/ft_split.c lib/ft_strlen.c lib/ft_substr.c  lib/ft_strdup.c lib/ft_strchr.c \
	linked_list/ft_lstadd_back.c linked_list/ft_lst_last.c linked_list/ft_lstadd_front.c linked_list/ft_lstnew.c linked_list/ft_lstsize.c  \
	push/swap.c push/rotate_1.c  push/rotate_r2.c push/pa.c push/pb.c\
	utils/push_to_stack.c push_to_a.c utils.c\
	push_swap.c three_case.c five_case.c hundred_case.c


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
