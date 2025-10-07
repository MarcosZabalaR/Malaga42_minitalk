/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:41:30 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/26 18:59:53 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que escribe un numero por pantalla

void	ft_putnbr_fd(int n, int fd)
{
	int		mult;
	char	c;

	mult = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		mult = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * mult, fd);
	c = '0' + n % 10 * mult;
	ft_putchar_fd(c, fd);
}
