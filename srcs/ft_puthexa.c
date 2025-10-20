/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:28:35 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/12/04 17:36:46 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int nb)
{
	int	i;

	i = 1;
	while (nb >= 16)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_puthexa(unsigned int nbr, char *base)
{
	long unsigned int	nb;

	nb = nbr;
	if (nb >= 16)
	{
		ft_puthexa(nb / 16, base);
		ft_puthexa(nb % 16, base);
	}
	else
		write(1, &(base[nb]), 1);
	return (ft_hexlen(nbr));
}
