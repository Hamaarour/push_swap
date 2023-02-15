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
NAME_b=checker
CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC=Mand/ft_printf/count_nbr.c Mand/ft_printf/ft_putchar.c Mand/ft_printf/ft_putnbr.c Mand/ft_printf/ft_putstr.c Mand/ft_printf/ft_putnbr_hex.c Mand/ft_printf/ft_printf.c \
	Mand/lib/ft_atoi.c Mand/lib/ft_calloc.c Mand/lib/ft_split.c Mand/lib/ft_strlen.c Mand/lib/ft_substr.c  Mand/lib/ft_strdup.c Mand/lib/ft_strchr.c \
	Mand/linked_list/ft_lstadd_back.c Mand/linked_list/ft_lst_last.c Mand/linked_list/ft_lstadd_front.c Mand/linked_list/ft_lstnew.c Mand/linked_list/ft_lstsize.c  \
	Mand/push/swap.c Mand/push/rotate_1.c  Mand/push/rotate_r2.c Mand/push/pa.c Mand/push/pb.c\
	Mand/utils/push_to_stack.c Mand/utils/utils.c\
	Mand/sort/three_case.c Mand/sort/five_case.c Mand/sort/hundred_case.c Mand/sort/push_to_a.c Mand/sort/sort_ten.c Mand/sort/push_to_a_utils.c\
	Mand/push_swap.c

SRC_b=  bonus/checker.c bonus/errors.c\
		bonus/bonus_utils.c bonus/check_error.c bonus/bonus_utils_t.c\
		bonus/G_N_L/get_next_line_utils.c bonus/G_N_L/get_next_line.c \
		bonus/lib/ft_atoi.c bonus/lib/ft_calloc.c bonus/lib/ft_split.c bonus/lib/ft_strlen.c bonus/lib/ft_substr.c  bonus/lib/ft_strdup.c bonus/lib/ft_strchr.c \
		bonus/ft_printf/count_nbr.c bonus/ft_printf/ft_putchar.c bonus/ft_printf/ft_putnbr.c bonus/ft_printf/ft_putstr.c bonus/ft_printf/ft_putnbr_hex.c bonus/ft_printf/ft_printf.c \
		bonus/actions/pa_bonus.c bonus/actions/pb_bonus.c bonus/actions/rotate_bonus.c bonus/actions/rotate_r2_bonus.c bonus/actions/swap_bonus.c


OBJ= $(SRC:.c=.o)

OBJ_b= $(SRC_b:.c=.o)

all:$(NAME)

.PHONY= all clean fclean re

bonus:$(NAME_b)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

$(NAME_b):$(OBJ_b)
	$(CC) $(CFLAGS) $(SRC_b) -o $(NAME_b)

clean:
	rm -rf $(OBJ) $(OBJ_b)

fclean:clean
	rm -rf $(NAME) $(NAME_b)

re:fclean all
