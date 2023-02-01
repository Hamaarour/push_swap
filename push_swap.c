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

   case_five_numbers(&stack_a, &stack_b);

   // //just print the stack
   //printf("******   Stack A ********\n");
   //t_list *t;
   // while (stack_a)
   // {
   //    printf("%d\n", stack_a->value);
   //    free(stack_a);
   //    stack_a = stack_a->next;
   // }
   // free(stack_a);
   // stack_a = NULL;
   // printf("\n\n");
   // printf("******   Stack B ******** \n");
   // printf("*************************\n");
   // while (stack_b)
   // {
   //    printf("\t%d\n", stack_b->value);
   //    stack_b = stack_b->next;
   // }
   // printf("*************************\n");


}
