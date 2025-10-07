/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:52:15 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/26 18:35:09 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que convierte los numeros de un string a int

int	ft_atoi(const char *str)
{
	int	multiplier;
	int	number;
	int	i;

	multiplier = 1;
	number = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			multiplier *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		number *= 10;
		number += (str[i] - '0');
		i++;
	}
	return (number * multiplier);
}
