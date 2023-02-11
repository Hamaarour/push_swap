/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:14:50 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/21 18:13:37 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <stdarg.h>
# include <sys/types.h>
# include <limits.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next;
}	t_list;

typedef struct var
{
	int		size;
	t_list	*hd;
	int		i;
	int		c;
	int		sigment;
}	t_vars;

typedef struct var_to_a
{
	int	*arr;
	int	i;
	int	counter;
	int	index;
}	t_vars_to_a;

t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*lst_last(t_list *stack);
int		lst_last_value(t_list *stack);
void	push_stack(t_list **stack, int value);
//+------------------------actions---------------------
void	swap(t_list *stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	s_ab(t_list **stack);
void	reverselist(t_list **stack_head);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_ab);
void	last_first(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_a);
void	rrr(t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
//+------------------------Sorting---------------------
void	case_three_numbers(t_list **stack_a);
void	case_five_numbers(t_list **stack_a, t_list **stack_b, int i);
//+------------------------Libft---------------------
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char sep);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strchr(char *str, int j);
//+------------------------Printf---------------------
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count_nbr(unsigned long nbr, int bs, int sign);
int		ft_putnbr(long int nbr);
int		ft_putnbr_hex(unsigned long nbr, char bs);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *str, ...);
int		ft_atoi(const char *str);
//+------------------------tests--------------------
int		*to_array(t_list *stack_a);
void	index_stack(t_list **stack_a);
void	sort_ten(t_list **stack_a, t_list **stack_b);
void	sort_hundred(t_list **stack_a, t_list **stack_b);
void	from_b_to_a(t_list **stack_a, t_list **stack_b);
//+------------------------Eroors--------------------
void	duplicate(t_list *stack_a);
void	is_sorted(t_list *stack_a);
//+------------------------utils_push_to_a-------------------
void	bubble_sort_des(int *arr, int size_stack);
int		*b_to_array(t_list *stack_b);
int		find_max_in_b(t_list *stack_b);
int		is_max_in_b(t_list *stack_b, int val_max);
int		return_index_of_max(t_list *stack_b);
void	put_max_b_in_top(t_list **stack_b);

#endif
