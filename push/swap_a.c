/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:40:04 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/28 15:40:04 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
sa (swap a): Swap the first 2 elements at the top of stack a.
            Do nothing if there is only one or no elements.

*/
void    sa(t_list **stack_a)
{
    swap(*stack_a);
    write(1,"sa\n",3);
}