/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:20:12 by yle-jaou          #+#    #+#             */
/*   Updated: 2025/10/21 01:41:35 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Wrapper for printf - returns character count */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
