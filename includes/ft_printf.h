/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:40:23 by yle-jaou          #+#    #+#             */
/*   Updated: 2025/10/21 01:41:35 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/includes/libft.h"

int	ft_printf(const char *text, ...);
int	ft_putadr(unsigned long value, char *hex);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr(int n);
int	ft_puthexa(unsigned int nbr, char *base);
int	ft_putstr(char *s);
int	ft_putchar(char c);

#endif