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
   t_list *stack_b;
   int value;
   int i;
   int j;

   stack_a = NULL;
   stack_b = NULL;

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
   push_stack(&stack_b, 5);
   push_stack(&stack_b, 6);
   push_stack(&stack_b, 7);
   push_stack(&stack_b, 8);

  
   pb(&stack_a,&stack_b);


   //just print the stack
   printf("Stack a \n");
   while (stack_a)
   {
      printf("%d\n", stack_a->value);
      stack_a = stack_a->next;
   }
   printf("Stack b \n");

   while (stack_b)
   {
      printf("%d\n", stack_b->value);
      stack_b = stack_b->next;
   }
}
