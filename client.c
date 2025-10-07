/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabala- <mzabala-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:58:45 by mzabala-          #+#    #+#             */
/*   Updated: 2024/05/29 22:12:56 by mzabala-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

void	send_signal(int server_pid, unsigned char message)
{
	int				i;
	unsigned char	c;

	i = 8;
	c = message;
	while (i > 0)
	{
		i--;
		c = message >> i;
		if (c % 2 == 0)
		{
			kill(server_pid, SIGUSR2);
		}
		else
			kill(server_pid, SIGUSR1);
		usleep(50);
	}
}

int	main(int argc, char *argv[])
{
	pid_t		server_pid;
	const char	*message;
	int			i;

	if (argc != 3)
	{
		printf("Error 3 arguments requiered");
		return (0);
	}
	server_pid = ft_atoi(argv[1]);
	message = argv[2];
	i = 0;
	while (message[i])
	{
		send_signal(server_pid, message[i]);
		i++;
	}
	send_signal(server_pid, '\0');
}
