/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:35:47 by mcipolla          #+#    #+#             */
/*   Updated: 2022/01/29 22:26:51 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char	*tab;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[c])
	{
		tab[i] = s2[c];
		i++;
		c++;
	}
	tab[i] = 0;
	return (tab);
}
