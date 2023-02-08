/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:14:27 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/08 22:58:48 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	temp = stack_b;

	int max = 0;
    while (temp)
    {
        if (temp->value > max)
            max = temp->value;
        temp = temp->next;
    }
    return (max);
}
int	return_index_of_max(t_list *stack_b)
{
	t_list	*tmp;
	int		index;
	int max;

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

void	put_max_b_in_top(t_list **stack_b)
{
	int		size;
	t_list	*stack_tmp;

	int index;
	int i;

	i = 0;
	stack_tmp = *stack_b;
	size = ft_lstsize(*stack_b);
	index = return_index_of_max(*stack_b);
	if (index < size / 2)
	{
		while (index > 0)
		{
			rb(stack_b);
			index--;
		}
	}
	else
	{
		while (index >= 0)
		{
			rrb(stack_b);
			index--;
		}
	}
}


void	from_b_to_a(t_list **stack_a, t_list **stack_b)
{
	int	*arr;
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	arr = b_to_array(*stack_b);
	while (*stack_b)
	{
		// if ()
		// {
		// 	if ((*stack_b)->value == arr[i])
		// 	{
		// 		pa(stack_a, stack_b);
		// 		i++;
		// 	}
		// 	else if (counter == 0 || (*stack_b)->value > (*stack_a)->value)
		// 	{
		// 		pa(stack_a, stack_b);
		// 		ra(stack_a);
		// 		counter++;
		// 	}
		// 	else
		// 		put_max_b_in_top(stack_b);
		// }
		// else
		// {

		// }
	}
	//printf("%d\n",(*stack_b)->value);

}
