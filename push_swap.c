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


int main(int ac, char **av)
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
	if (ac == 1)
		exit(1);
	while (i <= ac)
	{
		value = ft_atoi(av[j]);
		push_stack(&stack_a, value);
		i++;
		j++;
	}
	//check(av,&stack_a, ac);
	if (ft_lstsize(stack_a) == 5)
		case_five_numbers(&stack_a, &stack_b, 5);
	else if (ft_lstsize(stack_a) == 4)
		case_five_numbers(&stack_a, &stack_b, 4);
	else if (ft_lstsize(stack_a) < 100)
	{
		sort_hundred(&stack_a, &stack_b);
	}
	while (stack_a)
	{
		printf("%d\t%d\n", stack_a->value,stack_a->index);
		free(stack_a);
		stack_a = stack_a->next;
	}
	printf("*************************\n");
   //system("leaks push_swap");

   while (stack_b)
   {
      printf("%d\n", stack_b->value);
      free(stack_b);
      stack_b = stack_b->next;
   }



}
