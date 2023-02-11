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

void	ra(t_list **stack_a, int p)
{
	reverselist(stack_a);
	if (p == 1)
		ft_printf("ra\n");
}

void	rb(t_list **stack_b, int p)
{
	reverselist(stack_b);
	if (p == 1)
		ft_printf("rb\n");
}

void	rr(t_list **stack_ab)
{
	ra(stack_ab, 0);
	rb(stack_ab, 0);
	ft_printf("rr\n");
}
