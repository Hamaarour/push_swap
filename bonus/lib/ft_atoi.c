/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:28:51 by hamaarou          #+#    #+#             */
/*   Updated: 2023/01/26 21:28:51 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_bonus.h"

void	error(const char *str, int tebi)
{
	while (str[tebi])
	{
		if (str[tebi] < '0' || str[tebi] > '9')
		{
			ft_printf("Error\n");
			exit(1);
		}
		tebi++;
	}
}

void	error_max_int(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	check_num(long num)
{
	if (num > INT_MAX || num < INT_MIN)
	{
		error_max_int();
		return (0);
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				n;
	int				tebi;
	unsigned long	res;

	i = 0;
	n = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' && str[i + 1] != '\0')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	tebi = i;
	error(str, tebi);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (check_num(res * n));
}
