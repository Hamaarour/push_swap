/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:31:47 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/01 21:16:38 by hamaarou         ###   ########.fr       */
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
// ./push_swap 4 5 3 2 1
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

void	actions(int j, t_list **stack_a, t_list **stack_b)
{
	if (j == 1)
		pb(stack_a, stack_b);
	else if (j == 2)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (j == 3)
	{
		ra(stack_a);
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (j == 4)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
		rra(stack_a);
	}
	else if (j == 5)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

void	case_five_numbers(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	t_list	*ptr;

	i = 0;
	while (i < 2)
	{
		ptr = *stack_a;
		j = get_index(*stack_a);
		while (ptr)
		{
			if (ptr->value == get_min(*stack_a))
			{
				actions(j, stack_a, stack_b);
				break ;
			}
			ptr = ptr->next;
		}
		i++;
	}
	case_three_numbers(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
