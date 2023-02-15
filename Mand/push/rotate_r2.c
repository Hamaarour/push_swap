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

void	last_first(t_list **stack)
{
	t_list	*last;
	t_list	*current;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	current = *stack;
	while (current->next != NULL)
	{
		last = current;
		current = current->next;
	}
	last->next = NULL;
	current->next = *stack;
	*stack = current;
}

void	rra(t_list **stack_a, int p)
{
	last_first(stack_a);
	if (p == 1)
		ft_printf("rra\n");
}

void	rrb(t_list **stack_b, int p)
{
	last_first(stack_b);
	if (p == 1)
		ft_printf("rrb\n");
}

void	rrr(t_list **stack)
{
	rra(stack, 0);
	rrb(stack, 0);
	ft_printf("rrr\n");
}
