/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 00:19:40 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/17 19:51:08 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	size_t nbr;
	size_t i;
	size_t e;

	e = ft_strlen(s);
	if (e != 0)
		e--;
	while (e != 0 && s[e] == c)
		e--;
	if (e == 0)
		return (0);
	i = 0;
	nbr = 0;
	while (i < e)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != e)
			nbr++;
	}
	return (nbr);
}

static size_t	*ft_findnext(const char *s, size_t i, char c)
{
	size_t j;
	size_t *l;

	l = (size_t *)malloc(sizeof(size_t) * 2);
	while (s[i] == c && s[i] != '\0')
		i++;
	j = i;
	while (s[j] != c && s[j] != '\0')
		j++;
	if (j != i)
	{
		l[0] = i;
		l[1] = j - i;
	}
	return (l);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	len;
	char	**str;
	size_t	*i;
	size_t	j;
	size_t	i1;

	len = ft_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i1 = 0;
	j = 0;
	while (j < len)
	{
		i = ft_findnext(s, i1, c);
		str[j] = ft_strsub(s, ((unsigned int *)i)[0], i[1]);
		i1 = i[0] + i[1];
		j++;
	}
	str[j] = NULL;
	return (str);
}
