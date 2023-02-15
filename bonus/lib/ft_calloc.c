/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:49:33 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/13 21:00:29 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_bonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (count != 0 && size > SIZE_MAX / count)
		return (0);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	while (i < count * size)
		((char *)p)[i++] = 0;
	return ((void *)p);
}
