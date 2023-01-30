/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:40:30 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/30 19:44:48 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// send top of a to top of b

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list *first_a;
	t_list *first_b;

	if(stack_a == NULL || (*stack_a)->next == NULL)
		return;
	first_a = NULL;
	first_a = (*stack_a);
	first_b = (*stack_b);
	(*stack_a) = (*stack_a)->next;
	(*stack_b) = first_a;
	first_a->next = first_b;
	write(1, "pb\n", 3);

}
