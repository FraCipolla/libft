/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:35:34 by mcipolla          #+#    #+#             */
/*   Updated: 2022/02/02 18:52:46 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			ft_putchar ('-', fd);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr_fd (n / 10, fd);
		ft_putchar((n % 10) + '0', fd);
	}
}
