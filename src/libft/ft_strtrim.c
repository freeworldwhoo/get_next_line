/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 23:10:49 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/11 01:50:37 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	b;
	size_t	e;
	char	*str;

	b = 0;
	while (s[b] == ' ' || s[b] == '\t' || s[b] == '\n')
		b++;
	e = ft_strlen(s);
	if (e != 0)
		e--;
	while (e != 0 && (s[e] == ' ' || s[e] == '\t' || s[e] == '\n'))
		e--;
	if (e <= b)
		str = ft_strnew(0);
	else
	{
		str = (char *)malloc(sizeof(char) * (e - b + 2));
		ft_strncpy(str, s + b, (e - b) + 2);
	}
	str[e - b + 1] = '\0';
	return (str);
}
