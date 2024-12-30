/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:09:08 by delgamma          #+#    #+#             */
/*   Updated: 2024/05/20 09:08:29 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handle_signal(int signal)
{
	static int	p;
	static char	c;
	static int	i;

	if (p == 0)
		p = 128;
	if (signal == SIGUSR1)
	{
		c = c + 1 * p;
		p = p / 2;
	}
	else if (signal == SIGUSR2)
		p = p / 2;
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		p = 128;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Input Error!**PLEASE TRY AGAIN**\n");
		exit(EXIT_FAILURE);
	}
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (0);
}
