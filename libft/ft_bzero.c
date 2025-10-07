/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:46:10 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/02 21:18:03 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que rellena n bytes de un array pasado con 0

void	ft_bzero(void *arg, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)arg)[i] = 0;
		i++;
	}
}
