/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 05:03:58 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/10 14:17:24 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int si;

	i = 0;
	nbr = 0;
	si = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\v' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		si = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
		nbr = nbr * 10 + str[i++] - '0';
	return (nbr * si);
}
