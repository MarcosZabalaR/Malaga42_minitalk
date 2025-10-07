/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:17:50 by mzabala-          #+#    #+#             */
/*   Updated: 2024/03/08 18:42:41 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Función para cambiar a hexadecimal un puntero void

static void	ft_search_pointer(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_search_pointer(ptr / 16);
		ft_search_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_print_character(ptr + '0');
		else
			ft_print_character(ptr - 10 + 'a');
	}
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	size;

	size = 0;
	size = ft_print_string("0x");
	if (ptr == 0)
		size += ft_print_character('0');
	else
	{
		ft_search_pointer(ptr);
		while (ptr > 0)
		{
			size++;
			ptr /= 16;
		}
	}
	return (size);
}
