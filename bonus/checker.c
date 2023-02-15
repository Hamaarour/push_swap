/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:13 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/14 23:08:27 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_bonus.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	main_helper_bonus(t_list **stack_a, char **s)
{
	int	j;
	int	val;

	j = 0;
	while (s[j])
	{
		val = ft_atoi(s[j]);
		ft_lstadd_back_bonus(stack_a, ft_lstnew_bonus(val));
		free(s[j]);
		j++;
	}
	free(s);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_vars	var;
	char	**tmp;

	stack_a = NULL;
	stack_b = NULL;
	var.i = 1;
	if (argc > 1)
	{
		while (argv[var.i])
		{
			var.j = 0;
			var.v = ft_split(argv[var.i], ' ');
			if (var.v[0] == '\0')
				ft_error();
			main_helper_bonus(&stack_a, var.v);
			var.i++;
		}
		duplicate_bonus(stack_a);
		tmp = read_actions();
		sort(tmp, &stack_a, &stack_b);
		is_sorted_bonus(stack_a, stack_b);
	}
}
