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

#include "../swap_bonus.h"

t_list	*lst_last(t_list *stack)
{
	while (stack != NULL && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	reverselist(t_list **stack)
{
	t_list	*first;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	*stack = first->next;
	lst_last(*stack)->next = first;
	first->next = NULL;
}

void	ra_b(t_list **stack_a, int p)
{
	reverselist(stack_a);
	if (p == 1)
		ft_printf("ra\n");
}

void	rb_b(t_list **stack_b, int p)
{
	reverselist(stack_b);
	if (p == 1)
		ft_printf("rb\n");
}

void	rr_b(t_list **stack_a, t_list **stack_b)
{
	ra_b(stack_a, 0);
	rb_b(stack_b, 0);
}
