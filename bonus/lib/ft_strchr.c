/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:43:02 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/13 21:00:35 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_bonus.h"

char	*ft_strchr(char *str, int j)
{
	int		i;
	char	c;
	int		len;

	i = 0;
	c = (char)j;
	len = ft_strlen(str);
	if (c == '\0')
		return (&str[len]);
	while (i < len)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
