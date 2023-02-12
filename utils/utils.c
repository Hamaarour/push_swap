/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:00:53 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/12 21:17:11 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	duplicate(t_list *stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = stack_a;
	while (tmp)
	{
		tmp2 = tmp;
		while (tmp2->next != NULL)
		{
			if (tmp2->next->value == tmp->value)
			{
				ft_printf("Error\n");
				exit(1);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	is_sorted(t_list *stack_a)
{
	int		i;
	t_list	*current;

	current = stack_a;
	i = 0;
	while (current->next != NULL)
	{
		if (current->value < current->next->value)
			i++;
		current = current->next;
	}
	if (i == ft_lstsize(stack_a) - 1)
		exit(0);
}
