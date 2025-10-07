/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:55:49 by mzabala-          #+#    #+#             */
/*   Updated: 2024/05/29 23:23:10 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "printf/ft_printf.h"

void	handle_signal(int signal)
{
	static unsigned char	c;
	static int				i;

	c |= (signal == SIGUSR1);
	i++;
	if (i == 8)
	{
		if (c == '\0')
		{
			write(1, "\n", 1);
		}
		else
		{
			write(1, &c, 1);
		}
		i = 0;
		c = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
	{
	}
}
