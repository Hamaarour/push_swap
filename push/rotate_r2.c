/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:04:20 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/29 14:04:20 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list  *bottom_stack(t_list *stack)
{
    while(stack != NULL && stack->next != NULL)
        stack = stack->next;
    return(stack);
}
/*
The last element becomes the first one
*/

/*
In summary, this function takes the last element of the linked list and makes it the first element 
by updating the links accordingly. It does this by iterating through the list to find the last element,
then updating the links so that the last element is at the head of the list and the head of the list 
is at the end of the list.
*/
void    last_first(t_list **stack) 
{
    t_list *last;
    t_list *current;
    
    if (*stack == NULL || (*stack)->next == NULL)
        return;
    current = *stack;
    while(current->next != NULL){
        last = current;
        current = current->next;
    }
    last->next = NULL;
    current->next = *stack;
    *stack = current;

}
void    rra(t_list  **stack_a)
{
    last_first(stack_a);
    write(1, "rra\n", 3);
}

void    rrb(t_list  **stack_b)
{
    last_first(stack_b);
    write(1, "rrb\n", 3);
}
void    rrr(t_list  **stack)
{
    rrb(stack);
    rrb(stack); 
    write(1, "rrr\n", 3);
}