/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:36:44 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/02 21:23:20 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que nos devuelve un carácter en mayuscula

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		arg -= 32;
	return (arg);
}
