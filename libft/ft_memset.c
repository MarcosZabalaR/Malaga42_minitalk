/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:08:04 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/26 18:58:09 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que rellena de c, len veces un array str

void	*ft_memset(void *str, int c, size_t len)
{
	void	*ret;

	ret = str;
	while (len--)
		*(char *)str++ = (unsigned char)c;
	return (ret);
}
