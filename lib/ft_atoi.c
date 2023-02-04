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

#include "../push_swap.h"

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
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	tebi = i;
	// while (str[tebi])
	// {
	// 	//ft_prtebintf("SBIKSLLA");
	// 	if (str[tebi] < '0' || str[tebi] > '9')
	// 	{
	// 		ft_printf("idk fih ghayarha\n");
	// 		exit(1);
	// 	}
	// 	tebi++;
	// }

	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (res > 9223372036854775807 && n == 1)
		return (-1);
	else if (res > 9223372036854775807 && n == -1)
		return (0);
	return (res * n);
}
