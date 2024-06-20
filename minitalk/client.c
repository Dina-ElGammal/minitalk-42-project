/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:23:45 by delgamma          #+#    #+#             */
/*   Updated: 2024/05/20 08:38:31 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	check_and_send(int b, int pid)
{
	if (b == 0)
		kill(pid, SIGUSR2);
	else
		kill(pid, SIGUSR1);
	usleep(500);
}

void	char_encrypt(char c, int pid)
{
	int				i;
	int				p;
	unsigned char	bit;

	i = 8;
	p = 128;
	while (i--)
	{
		bit = (c / p & 1);
		check_and_send(bit, pid);
		p = p / 2;
	}
}

void	send_msg(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		char_encrypt(str[i], pid);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i++])
		{
			if (!ft_strchr("0123456789", argv[1][i]))
			{
				ft_printf("Input Error!**PLEASE TRY AGAIN**\n");
				exit(EXIT_FAILURE);
			}
		}
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
			exit(EXIT_FAILURE);
		send_msg(pid, argv[2]);
		send_msg(pid, "\n");
	}
	else
		exit(EXIT_FAILURE);
	return (0);
}
