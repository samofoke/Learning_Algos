/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:23:33 by samofoke          #+#    #+#             */
/*   Updated: 2019/07/09 09:02:42 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*d;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	d = (char*)malloc(len + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, src);
	return (d);
}
