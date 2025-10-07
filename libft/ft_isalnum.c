/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:10:28 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/02 21:18:43 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que nos dice si un carácter es Alfanúmerico

int	ft_isalnum(int n)
{
	return (ft_isalpha(n) || ft_isdigit(n));
}
