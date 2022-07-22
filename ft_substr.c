/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:36:07 by mcipolla          #+#    #+#             */
/*   Updated: 2022/02/07 10:15:43 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	j;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		tab = malloc(sizeof(char) * 1);
		if (!tab)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (len--)
	{
		tab[j] = s[start + j];
		j++;
	}
	tab[j] = 0;
	return (tab);
}
