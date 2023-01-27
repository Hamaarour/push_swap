/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:22:55 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/27 01:22:55 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void    swap_a(t_list **first, t_list *second) 
{
    if (first != NULL && second != NULL) 
    {
        int temp;
        
        temp = (*first)->value;
        (*first)->value = second->value;
        second->value = temp;
    }
}