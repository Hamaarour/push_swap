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

void	main_helper(t_list **stack_a, char **s)
{
	int	j;
	int	val;

	j = 0;
	while (s[j])
	{
		val = ft_atoi(s[j]);
		push_stack(stack_a, val);
		free(s[j]);
		j++;
	}
	free(s);
}

void	ft_err(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	int		j;
	char	**v;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			v = ft_split(argv[i], ' ');
			if (v[0] == '\0')
				ft_err();
			main_helper(&stack_a, v);
			i++;
		}
		duplicate(stack_a);
		is_sorted(stack_a);
		index_stack(&stack_a);
		sort(&stack_a, &stack_b);
	}
}
