/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:10:04 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/14 23:10:20 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_BONUS_H
# define SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next;
}	t_list;

typedef struct var
{
	int		i;
	int		j;
	char	**v;
	char	**s;
}	t_vars;

//+libft
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char sep);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strchr(char *str, int j);
//+ printf
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count_nbr(unsigned long nbr, int bs, int sign);
int		ft_putnbr(long int nbr);
int		ft_putnbr_hex(unsigned long nbr, char bs);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *str, ...);
int		ft_atoi(const char *str);
//+push_swap
void	duplicate_bonus(t_list *stack_a);
void	is_sorted_bonus(t_list *stack_a, t_list *stack_b);
t_list	*ft_lstnew_bonus(int content);
void	ft_lstadd_back_bonus(t_list **lst, t_list *new);
char	*ft_strjoin_get(char *s1, char *s2);
char	**read_actions(void);
int		ft_lstsize_b(t_list *lst);
char	**read_actions(void);
int		check_act(char *s);
//+actions
void	pa_b(t_list **stack_a, t_list **stack_b);
void	pb_b(t_list **stack_a, t_list **stack_b);
void	ra_b(t_list **stack_a, int p);
void	rb_b(t_list **stack_b, int p);
void	rr_b(t_list **stack_a, t_list **stack_b);
void	rra_b(t_list **stack_a, int p);
void	rrb_b(t_list **stack_b, int p);
void	rrr_b(t_list **stack_a, t_list **stack_b);
void	sb_b(t_list **stack_b, int p);
void	sa_b(t_list **stack_a, int p);
void	ss_ab_b(t_list **stack_a, t_list **stack_b);
//+sort
void	sort(char **stack_para, t_list **stack_a, t_list **stack_b);
void	is_stack_b_empty(t_list *stack_b);
void	ft_error(void);
void	ko_error(void);
void	ok_error(void);
#endif
