/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcipolla <mcipolla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:15:17 by mcipolla          #+#    #+#             */
/*   Updated: 2022/01/29 18:39:48 by mcipolla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;
	t_list	*tmp;

	if (lst)
	{
		tmp = lst;
		start = ft_lstnew(f(tmp-> content));
		if (!start)
			return (NULL);
		tmp = tmp -> next;
		while (tmp)
		{
			new = ft_lstnew(f(tmp-> content));
			if (!new)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, new);
			tmp = tmp-> next;
		}
		return (start);
	}
	return (NULL);
}
