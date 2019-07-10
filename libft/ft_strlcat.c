/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:56:30 by samofoke          #+#    #+#             */
/*   Updated: 2019/06/22 03:32:00 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] && x < size)
		x++;
	while ((src[y]) && ((x + y + 1) < size))
	{
		dst[x + y] = src[y];
		y++;
	}
	if (x != size)
		dst[x + y] = '\0';
	return (x + ft_strlen(src));
}
