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

void	swap(t_list *stack)
{
	int	temp;

	if (stack != NULL && stack->next != NULL)
	{
		temp = stack->value;
		stack->value = stack->next->value;
		stack->next->value = temp;
	}
}

void	sb(t_list **stack_b, int p)
{
	swap(*stack_b);
	if (p == 1)
		ft_printf("sb\n");
}

void	sa(t_list **stack_a, int p)
{
	swap(*stack_a);
	if (p == 1)
		ft_printf("sa\n");
}

void	s_ab(t_list **stack)
{
	sa(stack, 0);
	sb(stack, 0);
	ft_printf("ss\n");
}
