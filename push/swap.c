/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:22:55 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/27 01:22:55 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
    swap the 2 top element in a stack
*/
void    swap(t_list  *stack)
{
    int temp;

    if (stack != NULL && stack->next != NULL)
    {
        temp = stack->value;
        stack->value = stack->next->value;
        stack->next->value = temp;
    }
}
/*
sb (swap b): Swap the first 2 elements at the top of stack b.
            Do nothing if there is only one or no elements.

*/
void    sb(t_list **stack_b)
{
    swap(*stack_b);
    printf("sb\n");
}

/*
sa (swap a): Swap the first 2 elements at the top of stack a.
            Do nothing if there is only one or no elements.

*/
void    sa(t_list **stack_a)
{
    swap(*stack_a);
    printf("sa\n");
}

/*
    ss : sa and sb at the same time.
*/
void    s_ab(t_list **stack)
{
    sa(stack);
    sb(stack);
    printf("ss\n");
}
