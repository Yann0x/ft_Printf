/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:42:33 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/12/04 18:03:13 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_2(const char *text, va_list args, int *i, int *count)
{
	if (text[*i + 1] == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (text[*i + 1] == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (text[*i + 1] == 'p')
		*count += ft_putadr(va_arg(args, unsigned long), "0123456789abcdef");
	else if (text[*i + 1] == 'd' || text[*i + 1] == 'i')
		*count += ft_putnbr(va_arg(args, int));
	else if (text[*i + 1] == 'u')
		*count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (text[*i + 1] == 'x')
		*count += ft_puthexa(va_arg(args, unsigned int), "0123456789abcdef");
	else if (text[*i + 1] == 'X')
		*count += ft_puthexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (text[*i + 1] == '%')
		*count += write(1, "%", 1);
	return (*count);
}

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!text)
		return (-1);
	count = 0;
	va_start(args, text);
	i = 0;
	while (text[i])
	{
		if (text[i] == '%')
		{
			ft_printf_2(text, args, &i, &count);
			i += 2;
		}
		else
		{
			write(1, &text[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	int my_print;
// 	int print;

// 	my_print = ft_printf("\n%p", &my_print);
// 	print = printf("\n%p", &my_print);
// 	printf("my print = %d\nprint = %d", my_print, print);
// }