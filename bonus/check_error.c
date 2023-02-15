/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:05:26 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/15 01:10:42 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_bonus.h"
#include "G_N_L/get_next_line.h"

void	duplicate_bonus(t_list *stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = stack_a;
	while (tmp)
	{
		tmp2 = tmp;
		while (tmp2->next != NULL)
		{
			if (tmp2->next->value == tmp->value)
				ft_error();
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	is_stack_b_empty(t_list *stack_b)
{
	if (ft_lstsize_b(stack_b) != 0)
		ko_error();
}

void	is_sorted_bonus(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*current;

	current = stack_a;
	i = 0;
	if (!stack_a && stack_b)
		ko_error();
	while (current->next != NULL)
	{
		if (current->value < current->next->value)
			i++;
		current = current->next;
	}
	is_stack_b_empty(stack_b);
	if (i == ft_lstsize_b(stack_a) - 1)
		ok_error();
	else
		ko_error();
}

int	check_act(char *actions)
{
	char	**s;
	char	*line;
	int		i;

	line = "sa\n sb\n ss\n pa\n pb\n ra\n rb\n rr\n rra\n rrb\n rrr\n ";
	i = 0;
	s = ft_split(line, ' ');
	while (s[i])
	{
		if (i <= 7)
		{
			if (ft_strncmp(s[i], actions, 3) == 0)
				return (free(s), 0);
		}
		else
		{
			if (ft_strncmp(s[i], actions, 4) == 0)
				return (free(s), 0);
		}
		i++;
	}
	return (-1);
}

char	**read_actions(void)
{
	char	**total;
	char	*line;
	char	*lines;

	lines = NULL;
	line = get_next_line(0);
	while (line)
	{
		if (check_act(line) == 0)
		{
			lines = ft_strjoin_get(lines, line);
			free(line);
			line = NULL;
			line = get_next_line(0);
		}
		else
			ft_error();
	}
	total = ft_split(lines, '\n');
	free(lines);
	lines = NULL;
	return (total);
}
