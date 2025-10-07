/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:26:38 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/02 21:23:13 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que nos devuelve un carácter en minúscula

int	ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
		arg += 32;
	return (arg);
}
