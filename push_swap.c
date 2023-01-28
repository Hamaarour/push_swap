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
   t_list *stack_a;
   int value;
   int i;
   int j;

   stack_a = NULL;
   i = 2;
   j = 1;
   if (ac == 1)
      exit(1);
   while (i <= ac)
   {
      value = ft_atoi(av[j++]);
      push_stack(&stack_a, value);
      i++;
   }

   // if (stack_a != NULL && stack_a->next != NULL)
   //    sa(&stack_a);
   ra(&stack_a);

   //just print the stack
   i = 0;
   while (i < 1)
   {
      printf("%d\n", stack_a->value);
      stack_a = stack_a->next;
      i++;
   }
}
