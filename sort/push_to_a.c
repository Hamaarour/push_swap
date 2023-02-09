/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:14:27 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/09 20:32:38 by hamaarou         ###   ########.fr       */
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
			rb(stack_b);
			index--;
		}
	}
	else
	{
		while (index < size)
		{
			rrb(stack_b);
			index++;
		}
	}
}

void	from_b_to_a(t_list **stack_a, t_list **stack_b)
{
	int	*arr;
	int	i;
	int	counter;
	int	index;

	i = 0;
	counter = 0;
	arr = b_to_array(*stack_b);
	while (*stack_b)
	{
		index = is_max_in_b(*stack_b, arr[i]);
		if (index != -1)
		{
			if ((*stack_b)->value == arr[i])
			{
				pa(stack_a, stack_b);
				i++;
			}
			else if (counter == 0
				|| (*stack_b)->value > lst_last_value(*stack_a))
			{
				pa(stack_a, stack_b);
				ra(stack_a);
				counter++;
			}
			else
				put_max_b_in_top(stack_b);
		}
		else
		{
			rra(stack_a);
			counter--;
			i++;
		}
	}
	free(arr);
	while (counter > 0)
	{
		rra(stack_a);
		counter--;
	}
}
