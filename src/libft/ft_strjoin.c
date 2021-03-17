/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:13:52 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/11 01:49:28 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l1;
	size_t	l2;
	size_t	i;
	size_t	j;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (l1 + l2 + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < l1)
		str[j++] = s1[i++];
	i = 0;
	while (i < l2)
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
