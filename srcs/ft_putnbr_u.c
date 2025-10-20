/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:57:24 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/12/04 17:37:49 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(unsigned int nb)
{
	int				count;
	unsigned long	i;

	count = 1;
	i = nb;
	while (i > 9)
	{
		i /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned long	i;

	i = n;
	if (i >= 10)
	{
		ft_putnbr_u((i / 10));
		ft_putnbr_u((i % 10));
	}
	else
		ft_putchar((i + '0'));
	return (ft_nbrlen(n));
}
