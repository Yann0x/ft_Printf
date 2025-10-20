/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yle-jaou <yle-jaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:11:29 by yle-jaou          #+#    #+#             */
/*   Updated: 2024/12/04 18:02:58 by yle-jaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printadr(char *buffer, int i)
{
	int	word;
	int	count;

	word = 0;
	count = 0;
	while (buffer[i])
	{
		if (i < 2)
		{
			write(1, &buffer[i++], 1);
			count++;
		}
		else if (i > 1)
		{
			if (buffer[i] != '0')
				word = 1;
			if (word == 1)
			{
				write(1, &buffer[i], 1);
				count++;
			}
			i++;
		}
	}
	return (count);
}

int	ft_putadr(unsigned long value, char *hex)
{
	char	buffer[40];
	int		i;
	int		j;
	int		digit;

	if (!value)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = 0;
	j = 60;
	buffer[i++] = '0';
	buffer[i++] = 'x';
	while (j >= 0)
	{
		digit = (value >> j) & 0xF;
		buffer[i++] = hex[digit];
		j -= 4;
	}
	buffer[i] = '\0';
	return (ft_printadr(buffer, 0));
}
/*
#include <stdio.h>

int	main(void)
{
	char *test = "cac";
	char *yp = "zobi";
	char *ptr = test;
	char *super = yp;
	ft_putadr((unsigned long)super);
	//write(1, "\n", 1);
	printf("\n%p", super);
}*/