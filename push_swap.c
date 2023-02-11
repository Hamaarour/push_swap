/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:50:23 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/23 15:10:28 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 3)
		case_three_numbers(stack_a);
	else if (ft_lstsize(*stack_a) == 5)
		case_five_numbers(stack_a, stack_b, 5);
	else if (ft_lstsize(*stack_a) == 4)
		case_five_numbers(stack_a, stack_b, 4);
	else if (ft_lstsize(*stack_a) <= 10)
		sort_ten(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 10)
	{
		sort_hundred(stack_a, stack_b);
		from_b_to_a(stack_a, stack_b);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		value;
	int		i;
	int		j;

	stack_a = NULL;
	stack_b = NULL;
	i = 2;
	j = 1;
	if (ac > 1)
	{
		while (i++ <= ac)
		{
			value = ft_atoi(av[j++]);
			push_stack(&stack_a, value);
		}
		duplicate(stack_a);
		is_sorted(stack_a);
		index_stack(&stack_a);
		sort(&stack_a, &stack_b);
	}
	while (1);
}
