/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 18:52:21 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/17 19:37:11 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_slrisplit(char *str, size_t n)
{
	char	**s;
	size_t	i;

	if (n >= ft_strlen(str))
		return (NULL);
	s = (char **)malloc(sizeof(char *) * 2);
	s[0] = (char *)malloc(sizeof(char) * (n + 1));
	s[0][n] = '\0';
	i = 0;
	while (i < n)
	{
		s[1][i] = str[i];
		i++;
	}
	s[2] = (char *)malloc(sizeof(char) * (ft_strlen(str) - n + 1));
	while (str[i] != '\0')
	{
		s[1][i - n] = str[i];
		i++;
	}
	s[1][i - n] = '\0';
	return (s);
}
