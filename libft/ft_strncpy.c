/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiweathe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:45:06 by wiweathe          #+#    #+#             */
/*   Updated: 2018/04/24 00:40:45 by wiweathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	len = 0;
	while (src[i] != '\0' || len < i)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == '\0' && len < i)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
