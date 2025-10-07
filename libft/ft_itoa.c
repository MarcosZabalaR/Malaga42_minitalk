/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:12:22 by mzabala-          #+#    #+#             */
/*   Updated: 2023/12/26 18:37:02 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que convierte un número en un string char

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		if (n == -2147483648)
		{
			len++;
			n = -147483648;
		}
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

void	ft_inttostring(int len, char *nstring, int n)
{
	while (n > 0)
	{
		len--;
		nstring[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*nstring;

	len = ft_numlen(n);
	nstring = malloc(sizeof(char) * (len + 1));
	if (nstring == NULL)
		return (NULL);
	nstring[len] = '\0';
	if (n < 0)
	{
		nstring[0] = '-';
		if (n == -2147483648)
		{
			nstring[1] = '2';
			n = -147483648;
		}
		n *= -1;
	}
	if (n == 0)
		nstring[0] = '0';
	ft_inttostring(len, nstring, n);
	return (nstring);
}
