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

#include "../swap_bonus.h"

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

void	rra_b(t_list **stack_a, int p)
{
	last_first(stack_a);
	if (p == 1)
		ft_printf("rra\n");
}

void	rrb_b(t_list **stack_b, int p)
{
	last_first(stack_b);
	if (p == 1)
		ft_printf("rrb\n");
}

void	rrr_b(t_list **stack_a, t_list **stack_b)
{
	rra_b(stack_a, 0);
	rrb_b(stack_b, 0);
}
