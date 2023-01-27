/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:15:28 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/23 15:33:36 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void  ft_lstadd_back(t_list **head, t_list *new)
{
   t_list	*tmp;
   if (!head || !*head)
   {
      (*head) = new;
      return;
   }
   if (!new)
      return;
   tmp = *head;
   while (tmp->next != NULL)
   {
      tmp = tmp->next;
   }
   tmp->next = new;
   	
}

