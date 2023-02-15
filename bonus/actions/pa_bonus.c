/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:40:05 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/14 23:09:02 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_bonus.h"

void	pa_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a;
	t_list	*first_b;

	if (!*stack_b)
		return ;
	first_b = NULL;
	first_b = (*stack_b);
	first_a = (*stack_a);
	(*stack_b) = (*stack_b)->next;
	(*stack_a) = first_b;
	first_b->next = first_a;
}
