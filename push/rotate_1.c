/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:54:50 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/29 13:54:50 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

/*
The first element becomes the last one

In this function, we first check if the list
is empty or has only one element. If so, we
return without doing anything. If not, we 
save the pointer to the first element in 
a variable first, update the head of the 
list to point to the second element, then
we use the bottom_stack function to find
the last element in the list, and update
its next pointer to point to the original
first element. Finally we set the next 
pointer of the original first element 
to be null to indicate it is the last 
element now
*/
void reverseList(t_list **stack)
{
   t_list *first;
    if (*stack == NULL || (*stack)->next == NULL)
        return;
    first = *stack;
    *stack = first->next;
    bottom_stack(*stack)->next = first;
    first->next = NULL;
}

void    ra(t_list **stack_a)
{
    reverseList(stack_a);
    write(1, "ra\n", 3);  
}

void    rb(t_list **stack_b)
{
    reverseList(stack_b);
    write(1, "rb\n", 3);  
}

void    rr(t_list **stack_ab)
{
    ra(stack_ab);
    rb(stack_ab);
    write(1, "rr\n", 3);
}