/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:36:04 by mcipolla          #+#    #+#             */
/*   Updated: 2022/01/29 17:23:41 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	r;
	int		i;
	char	*str;

	i = 0;
	r = (char)c;
	str = (char *)s;
	while (str[i])
	i++;
	while (i >= 0)
	{
		if (str[i] == r)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
