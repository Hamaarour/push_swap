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

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>

typedef struct node
{
    int value;
    struct node *next;
} t_list;

t_list  *ft_lstnew(int content);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
int     ft_atoi(const char *str);

void push_stack(t_list **stack, int value);

//------------------------actions---------------------
void    swap(t_list *stack);
void    sa(t_list **stack_a);
void    sb(t_list **stack_b);
void    s_ab(t_list **stack);

t_list  *bottom_stack(t_list *stack);
void    reverseList(t_list **stack_head);
void    ra(t_list **stack_a);
void    rb(t_list **stack_b);
void    rr(t_list **stack_ab);
void last_first(t_list **stack);



#endif