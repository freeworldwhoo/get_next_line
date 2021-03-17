/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnbou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 04:53:08 by rnbou             #+#    #+#             */
/*   Updated: 2018/10/08 13:03:46 by rnbou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void *c;

	c = malloc(sizeof(unsigned char) * n);
	ft_memcpy(c, src, n);
	ft_memcpy(dst, c, n);
	free(c);
	return (dst);
}
