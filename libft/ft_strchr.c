/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:14:24 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/03 22:01:12 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que nos devuelve la primera instancia de un caracter pasado

char	*ft_strchr(const char *str, int c)
{
	while (*str != (unsigned char)c)
		if (!*str++)
			return (0);
	return ((char *)str);
}
