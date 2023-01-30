/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:11:52 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/22 14:40:08 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !*lst)
   {
      (*lst) = new;
      return;
   }
    if (!new)
      return;
    new->next = *lst;
    *lst = new;

}