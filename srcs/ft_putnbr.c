/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:04:42 by yle-jaou          #+#    #+#             */
/*   Updated: 2025/10/21 01:41:35 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Printf-specific wrapper - uses libft's ft_itoa and returns character count */
int	ft_putnbr(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	if (!str)
		return (0);
	count = ft_strlen(str);
	write(1, str, count);
	free(str);
	return (count);
}
