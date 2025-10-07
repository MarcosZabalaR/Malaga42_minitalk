/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:39:10 by mzabala-          #+#    #+#             */
/*   Updated: 2024/03/08 18:43:07 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcion printf, para mostrar textos con variables por pantalla

#include "ft_printf.h"

static int	ft_print_asterist(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_character(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_flaglist(va_list args, const char flag)
{
	int	size;

	size = 0;
	if (flag == 'c')
		size += ft_print_character(va_arg(args, int));
	else if (flag == 's')
		size += ft_print_string(va_arg(args, char *));
	else if (flag == 'p')
		size += ft_print_pointer(va_arg(args, unsigned long long));
	else if (flag == 'd' || flag == 'i')
		size += ft_print_number(va_arg(args, int));
	else if (flag == 'u')
		size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (flag == 'x' || flag == 'X')
		size += ft_print_hexadecimal(va_arg(args, unsigned int), flag);
	else if (flag == '%')
		size += ft_print_asterist();
	return (size);
}

int	ft_printf(char const *text, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, text);
	while (text[i])
	{
		if (text[i] == '%')
		{
			size += ft_flaglist(args, text[i + 1]);
			i++;
		}
		else
			size += ft_print_character(text[i]);
		i++;
	}
	va_end(args);
	return (size);
}
