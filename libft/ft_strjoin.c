/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:06:21 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/03 21:52:18 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcion que reserva espacio y concatena 2 strings

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		size1;
	int		size2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (size1 + size2) + 1);
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, size1 + 1);
	ft_strlcpy(s3 + (size1), s2, size2 + 1);
	return (s3);
}
