/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:40:07 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/28 15:40:07 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
/*
sb (swap b): Swap the first 2 elements at the top of stack b.
            Do nothing if there is only one or no elements.

*/
void    sb(t_list **stack_b)
{
    swap(*stack_b);
    write(1,"sb\n",3);
}