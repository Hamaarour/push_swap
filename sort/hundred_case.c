/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 01:28:30 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/09 20:58:35 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	gg(int size)
{
	if (size == 500)
		return (size / 11);
	else if (size > 200)
		return (size / 5);
	else if (size > 100)
		return (size / 4);
	else if (size > 10)
		return (size / 2);
	return (1);
}

void	rotate_b(t_list **a, t_list **b, int index, int size_b)
{
	(void)a;
	if (index < (size_b / 2))
		rb(b);
}

void	sort_hundred(t_list **stack_a, t_list **stack_b)
{
	t_vars	v;

	v.sigment = 0;
	v.size = ft_lstsize(*stack_a);
	v.c = 0;
	while (*stack_a)
	{
		v.i = 0;
		v.sigment += gg(v.size);
		while (v.i < (v.sigment - v.c) + 1)
		{
			if ((*stack_a)->index >= v.c && (*stack_a)->index <= v.sigment)
			{
				pb(stack_a, stack_b);
				v.hd = *stack_b;
				rotate_b(stack_a, stack_b, v.hd->index, (v.sigment + v.c));
				v.i++;
				v.size--;
			}
			else
				ra(stack_a);
		}
		v.c = v.sigment + 1;
	}
}
