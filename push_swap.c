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

int main()
{
   int i = -1;
   t_list   *lst = NULL;
   while (++i < 5)
   {
      ft_lstadd_back(&lst, ft_lstnew(i));
   }
   t_list *new = ft_lstnew(100);
   ft_lstadd_front(&lst, new);
   while(lst)
   {
      printf("%d\n", lst->value);
      lst = lst->next;
      
   }
}