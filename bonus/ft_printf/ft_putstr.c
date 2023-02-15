/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:55:43 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/13 21:05:05 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_bonus.h"

int	ft_putstr(char *str)
{
	int		i;
	char	*n;

	n = "(null)";
	i = 0;
	if (!str)
		return (ft_putstr(n));
	while (str[i])
		write(1, &str[i++], 1);
	return (ft_strlen(str));
}
