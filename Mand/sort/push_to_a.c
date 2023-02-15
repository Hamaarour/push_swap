/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:14:27 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/11 17:58:30 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_max_b_in_top(t_list **stack_b)
{
	int		size;
	t_list	*stack_tmp;
	int		index;
	int		i;

	i = 0;
	stack_tmp = *stack_b;
	size = ft_lstsize(*stack_b);
	index = return_index_of_max(*stack_b);
	if (index < (size / 2))
	{
		while (index > 0)
		{
			rb(stack_b, 1);
			index--;
		}
	}
	else
	{
		while (index < size)
		{
			rrb(stack_b, 1);
			index++;
		}
	}
}

void	from_b_to_a_helper(t_list **stack_a, t_list **stack_b, t_vars_to_a *var)
{
	if ((*stack_b)->value == var->arr[var->i])
	{
		pa(stack_a, stack_b);
		var->i++;
	}
	else if (var->counter == 0 || (*stack_b)->value > lst_last_value(*stack_a))
	{
		pa(stack_a, stack_b);
		ra(stack_a, 1);
		var->counter++;
	}
	else
		put_max_b_in_top(stack_b);
}

void	from_b_to_a(t_list **stack_a, t_list **stack_b)
{
	t_vars_to_a	var;

	var.i = 0;
	var.counter = 0;
	var.arr = b_to_array(*stack_b);
	while (*stack_b)
	{
		var.index = is_max_in_b(*stack_b, var.arr[var.i]);
		if (var.index != -1)
			from_b_to_a_helper(stack_a, stack_b, &var);
		else
		{
			rra(stack_a, 1);
			var.counter--;
			var.i++;
		}
	}
	free(var.arr);
	while (var.counter > 0)
	{
		rra(stack_a, 1);
		var.counter--;
	}
}
