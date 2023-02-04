/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:31:47 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/04 02:24:42 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list *stack_a)
{
	int		m;
	t_list	*cur;

	m = 0;
	cur = stack_a;
	m = cur->value;
	while (cur)
	{
		if (m > cur->value)
			m = cur->value;
		cur = cur->next;
	}
	return (m);
}

int	get_index(t_list *stack_a)
{
	t_list	*currents;
	int		idx;
	int		min;

	idx = 1;
	currents = stack_a;
	min = get_min(stack_a);
	while (currents)
	{
		if (currents->value == min)
			break ;
		currents = currents->next;
		idx++;
	}
	return (idx);
}

void	rotate(t_list **stack_a, t_list **stack_b)
{
	int	j;
	int	s;

	j = get_index(*stack_a);
	s = ft_lstsize(*stack_a);
	if (j > s / 2 && (j - s / 2) != 0)
	{
		while (j <= s)
		{
			rra(stack_a);
			j++;
		}
	}
	else if (j <= s / 2 && (s / 2 - j) == 0)
	{
		while (j > 0)
		{
			ra(stack_a);
			j--;
		}
	}
	pb(stack_a, stack_b);
}

void	case_five_numbers(t_list **stack_a, t_list **stack_b, int i)
{
	if (i == 4)
	{
		rotate(stack_a, stack_b);
		case_three_numbers(stack_a);
	}
	else if (i == 5)
	{
		rotate(stack_a, stack_b);
		rotate(stack_a, stack_b);
		case_three_numbers(stack_a);
		pa(stack_a, stack_b);
	}
	pa(stack_a, stack_b);
}
