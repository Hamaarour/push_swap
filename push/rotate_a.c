/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:35:33 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/28 16:35:33 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
The first step is to initialize three pointers: prev, current, and next. prev is initially set to 
NULL because it represents the tail of the reversed list and initially there is no tail. 
current is set to the current head of the list, which is *head_ref, and next is used to
 temporarily store the next node in the list while we are reversing the current node's pointer.

The while loop iterates through the linked list, starting from the head. In each iteration,
 we first store the next node in the list in the next pointer, so that we don't lose the reference 
 to the rest of the list. Then, we change the current node's next pointer to point to the previous
  node (which is stored in the prev pointer) instead of the next node. This reverses the direction
   of the current node's pointer.

Finally, we move the prev pointer to the current node and the current pointer to the next node.
 This sets up the pointers for the next iteration of the loop.

After the loop is finished, the prev pointer will point to the last node of the original list,
 which is now the new head of the reversed list. So we update the head of the list to be prev by
  using *head_ref = prev;.
*/

void reverseList(t_list **stack_head)
 {
    t_list  *tail = NULL;
    t_list  *current = *stack_head;
    t_list  *next; //tempprory for stor the next_node

    if(stack_head == NULL || *stack_head == NULL)
        return; // check if the list is empty
    while (current != NULL) {
        next = current->next;
        current->next = tail;
        tail = current;
        current = next;
    }
    *stack_head = tail;
}


void    ra(t_list **stack_a)
{
    reverseList(stack_a);
    
}