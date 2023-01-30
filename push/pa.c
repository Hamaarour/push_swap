/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:40:05 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/30 19:46:59 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
// send top of b to top of a

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list *first_a;
	t_list *first_b;

	if(stack_b == NULL)
		return;
	first_b = NULL;
	first_b = (*stack_b);
	first_a = (*stack_a);
	(*stack_b) = (*stack_b)->next;
	(*stack_a) = first_b;
	first_b->next = first_a;
	write(1, "pa\n", 3);
}
