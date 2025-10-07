/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:32:51 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/03 22:41:54 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Funcion que hace un malloc y lo rellena de 0

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*v;

	v = malloc(nitems * size);
	if (!v)
		return (0);
	ft_bzero(v, nitems * size);
	return (v);
}
