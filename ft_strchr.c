/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:35:40 by mcipolla          #+#    #+#             */
/*   Updated: 2022/01/29 17:23:07 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;
	int		x;
	char	*str;

	i = (char)c;
	x = 0;
	str = (char *)s;
	if (i == '\0')
		return (&str[ft_strlen(str)]);
	while (str[x])
	{
		if (str[x] == i)
			return (&str[x]);
		x++;
	}
	return (NULL);
}
