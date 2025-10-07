/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:51:16 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/26 19:12:07 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que devuelve el tamaño de la concatenacion de 2 strings

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;

	i = 0;
	while (*dst && i < size)
	{
		++dst;
		++i;
	}
	ret = ft_strlcpy(dst, src, size - i);
	return (ret + i);
}
