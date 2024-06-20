/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:44:41 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/14 08:12:24 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	wrtietofile(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	minus;

	if (n < 0)
	{
		minus = '-';
		wrtietofile(minus, fd);
		if (n == -2147483648)
		{
			wrtietofile('2', fd);
			n = 147483648;
		}
		else
		{
			n *= -1;
		}
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		wrtietofile(n + '0', fd);
	}
}

// int  main(int argc, char const *argv[])
// {
//  int fd;

//  fd = open("tstFile.txt", O_RDWR | O_CREAT, 0600);
//  ft_putnbr_fd(-56, fd);
//  return (0);
// }
