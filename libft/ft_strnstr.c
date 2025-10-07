/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:02:09 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/19 20:55:36 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcion que encuentra una cadena de caracteres dentro de otra

char	*ft_strnstr(const char *text, const char *word, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!word[i])
		return ((char *)text);
	if (!text[i] || len < ft_strlen(word))
		return (NULL);
	while (i < len && text[i] != '\0')
	{
		j = 0;
		while (i < len && text[i] == word[j])
		{
			i++;
			j++;
			if (!word[j])
				return ((char *)text + (i - j));
		}
		if (j > 0)
			i -= j;
		i++;
	}
	return (NULL);
}
