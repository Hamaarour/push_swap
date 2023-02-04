/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 01:28:30 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/04 03:06:35 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr, int size_stack)
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
			if (arr[j] > arr[j + 1])
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

int	*to_array(t_list *stack_a)
{
	int		size_stack;
	t_list	*stk;
	int		*arr;
	int		i;

	i = 0;
	size_stack = ft_lstsize(stack_a);
	arr = malloc(sizeof(int) * size_stack);
	if (!arr)
		return (0);
	stk = (stack_a);
	while (i < size_stack)
	{
		arr[i] = stk->value;
		stk = stk->next;
		i++;
	}
	i = 0;
	bubble_sort(arr, size_stack);
	return (arr);
}

void	index_stack(t_list **stack_a)
{
	t_list	*tmp_stack;
	int		id;
	int		*tab;
	int		size;

	tmp_stack = *stack_a;
	tab = to_array(*stack_a);
	size = ft_lstsize(*stack_a);
	while (tmp_stack)
	{
		id = 0;
		while (id < size)
		{
			if (tmp_stack->value == tab[id])
			{
				tmp_stack->index = id;
				break ;
			}
			id++;
		}
		tmp_stack = tmp_stack->next;
	}
	free(tab);
}

void sort_hundred(t_list **stack_a, t_list **stack_b)
{
	int chunk_1 = ft_lstsize(*stack_a) / 5;
	int i = 0;
	t_list *tmp_stack = (*stack_a);
	while(i < chunk_1)
	{

	}
}
