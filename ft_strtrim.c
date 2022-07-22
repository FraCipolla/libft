/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:36:05 by mcipolla          #+#    #+#             */
/*   Updated: 2022/02/02 18:51:20 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	c;

	c = 0;
	while (c < len)
	{
		dst[c] = src[c];
		c++;
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tmp;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen (s1 + start);
	if (end)
		while (s1[end + start - 1] != 0
			&& ft_strchr (set, s1[end + start - 1]) != 0)
			end--;
	tmp = malloc(sizeof(char) * end + 1);
	if (!tmp)
		return (NULL);
	ft_strncpy(tmp, s1 + start, end);
	tmp[end] = '\0';
	return (tmp);
}
