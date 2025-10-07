/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:08:05 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/26 19:15:45 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que elimina caracteres del inicio y final de un string

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	s2 = (char *)s1;
	while (s2[start] && ft_isset(s2[start], set))
		start++;
	while (start < end && ft_isset(s2[end - 1], set))
		end--;
	s2 = ft_substr(s2, start, end - start);
	return (s2);
}
