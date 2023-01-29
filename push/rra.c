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
If the stack has more than one element, the function initializes two pointers, last and current, and sets current to point to the head of the stack. It then enters a while loop that continues until current points to the last element in the stack. In each iteration of the loop, last is set to current, and current is set to current->next, so that last points to the element before current and current points to the element after last.

Once the while loop is finished, the function sets the next pointer of the last element to NULL, which is necessary to avoid memory leak. Then it sets the next pointer of the current element, which is now the last element, to point to the head of the stack, so that it becomes the new head of the stack. Finally, it modifies the original stack pointer to point to the new head of the stack.

In summary, this function takes the last element of the linked list and makes it the first element by updating the links accordingly. It does this by iterating through the list to find the last element, then updating the links so that the last element is at the head of the list and the head of the list is at the end of the list.
Please let me know if you have any further question.
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
