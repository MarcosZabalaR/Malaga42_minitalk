/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:17:54 by mzabala-          #+#    #+#             */
/*   Updated: 2024/03/08 18:42:59 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Función para cambiar a base hexadecimal un numero

static void	ft_change_hexadecimal(unsigned int num, const char word)
{
	if (num >= 16)
	{
		ft_change_hexadecimal(num / 16, word);
		ft_change_hexadecimal(num % 16, word);
	}
	else
	{
		if (num < 10)
			ft_print_character(num + '0');
		else
		{
			if (word == 'x')
				ft_print_character(num - 10 + 'a');
			if (word == 'X')
				ft_print_character(num - 10 + 'A');
		}
	}
}

int	ft_print_hexadecimal(unsigned int num, const char word)
{
	int	size;

	size = 0;
	if (num == 0)
		return (ft_print_character('0'));
	else
	{
		ft_change_hexadecimal(num, word);
	}
	while (num != 0)
	{
		size++;
		num = num / 16;
	}
	return (size);
}
