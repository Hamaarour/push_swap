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
void    last_first(t_list **stack) {
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
