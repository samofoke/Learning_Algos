/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:57:50 by samofoke          #+#    #+#             */
/*   Updated: 2019/07/04 14:22:51 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	if (!*sub)
		return ((char*)str);
	while (str[i] != '\0' && i < len)
	{
		cnt = 0;
		while (sub[cnt])
		{
			if (sub[cnt] == str[i + cnt])
				cnt++;
			else
				break ;
		}
		if (!sub[cnt] && len >= i + cnt)
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}
