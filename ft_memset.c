/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:35:27 by mcipolla          #+#    #+#             */
/*   Updated: 2022/01/29 17:22:51 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		n;
	char		*str;

	n = 0;
	str = (char *)b;
	while (n < len)
	{
		str[n] = (unsigned char)c;
		n++;
	}
	return (b);
}
