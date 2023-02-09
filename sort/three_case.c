/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:05:08 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/09 17:06:55 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_three_numbers(t_list **stack_a)
{
	int	first;
	int	last;
	int	middle;

	first = (*stack_a)->value;
	middle = (*stack_a)->next->value;
	last = lst_last(*stack_a)->value;
	if (ft_lstsize(*stack_a) == 2 && first > last)
		sa(stack_a);
	else if (first > middle && middle < last && last > first)
		sa(stack_a);
	else if (first > middle && middle > last && first > last)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > middle && middle < last && last < first)
		ra(stack_a);
	else if (first < middle && first < last && last < middle)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < middle && first > last && middle > first)
		rra(stack_a);
}
