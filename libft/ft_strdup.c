/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:24:53 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/02 21:25:32 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que copia un array string a un puntero reservado en memoria malloc

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	while (*src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst);
}
