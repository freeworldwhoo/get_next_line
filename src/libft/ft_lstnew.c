/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 04:11:59 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/12 10:43:13 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*l;

	if (!(l = malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		l->content = NULL;
		l->content_size = 0;
		l->next = NULL;
	}
	else
	{
		if (!(l->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
		l->next = NULL;
	}
	return (l);
}
