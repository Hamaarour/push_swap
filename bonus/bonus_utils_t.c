/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils_t.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 00:56:17 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/15 00:47:30 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_bonus.h"

void	norm(char *stack_para, t_list **stack_a, t_list **stack_b)
{
	if (ft_strncmp(stack_para, "sa", 3) == 0)
		sa_b(stack_a, 0);
	else if (ft_strncmp(stack_para, "sb", 3) == 0)
		sb_b(stack_b, 0);
	else if (ft_strncmp(stack_para, "ss", 3) == 0)
		ss_ab_b(stack_a, stack_b);
	else if (ft_strncmp(stack_para, "pa", 3) == 0)
		pa_b(stack_a, stack_b);
	else if (ft_strncmp(stack_para, "pb", 3) == 0)
		pb_b(stack_a, stack_b);
	else if (ft_strncmp(stack_para, "ra", 3) == 0)
		ra_b(stack_a, 0);
	else if (ft_strncmp(stack_para, "rb", 3) == 0)
		rb_b(stack_b, 0);
	else if (ft_strncmp(stack_para, "rr", 3) == 0)
		rr_b(stack_a, stack_b);
	else if (ft_strncmp(stack_para, "rra", 3) == 0)
		rra_b(stack_a, 0);
	else if (ft_strncmp(stack_para, "rrb", 3) == 0)
		rrb_b(stack_b, 0);
	else if (ft_strncmp(stack_para, "rrr", 3) == 0)
		rrr_b(stack_a, stack_b);
}

void	sort(char **stack_para, t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	if (!stack_para)
		return ;
	while (stack_para[i])
	{
		norm(stack_para[i], stack_a, stack_b);
		i++;
	}
}
