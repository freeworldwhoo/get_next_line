/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:10:07 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/31 18:24:08 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	l;
	size_t	i;

	l = ft_strlen(s1);
	if ((s2 = (char *)malloc(sizeof(char) * l + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i <= l)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
