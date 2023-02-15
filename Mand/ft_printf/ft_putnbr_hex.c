/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:01:45 by hamaarou          #+#    #+#             */
/*   Updated: 2023/02/02 18:58:52 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_putnbr_hex(unsigned long nbr, char bs)
{
	if (nbr >= 16)
	{
		ft_putnbr_hex((nbr / 16), bs);
		ft_putnbr_hex((nbr % 16), bs);
	}
	else
	{
		if (nbr < 10)
			ft_putnbr(nbr);
		else
			ft_putchar(nbr - 10 + 'a' + bs - 'x');
	}
	return (count_nbr(nbr, 16, 1));
}
