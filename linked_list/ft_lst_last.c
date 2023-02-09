/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:56:54 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/09 13:43:09 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_last(t_list *stack)
{
	while (stack != NULL && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

int	lst_last_value(t_list *stack)
{
	while (stack != NULL && stack->next != NULL)
		stack = stack->next;
	return (stack->value);
}
