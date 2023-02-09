/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:24:24 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/09 20:32:16 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubble_sort_des(int *arr, int size_stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size_stack - 1)
	{
		j = 0;
		while (j < size_stack - i - 1)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*b_to_array(t_list *stack_b)
{
	int		size_stack;
	t_list	*stk;
	int		*arr;
	int		i;

	i = 0;
	size_stack = ft_lstsize(stack_b);
	arr = malloc(sizeof(int) * size_stack);
	if (!arr)
		return (0);
	stk = (stack_b);
	while (i < size_stack)
	{
		arr[i] = stk->value;
		stk = stk->next;
		i++;
	}
	i = 0;
	bubble_sort_des(arr, size_stack);
	return (arr);
}

int	find_max_in_b(t_list *stack_b)
{
	t_list	*temp;
	int		max;

	temp = stack_b;
	max = temp->value;
	while (temp)
	{
		if (temp->value > max)
			max = temp->value;
		temp = temp->next;
	}
	return (max);
}

int	is_max_in_b(t_list *stack_b, int val_max)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->value == val_max)
			return (i);
		stack_b = stack_b -> next;
	}
	return (-1);
}

int	return_index_of_max(t_list *stack_b)
{
	t_list	*tmp;
	int		index;
	int		max;

	index = 0;
	tmp = stack_b;
	max = find_max_in_b(tmp);
	while (tmp)
	{
		if (tmp->value == max)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return (-1);
}
