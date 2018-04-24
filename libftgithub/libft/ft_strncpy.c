/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiweathe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:45:06 by wiweathe          #+#    #+#             */
/*   Updated: 2018/04/23 19:48:06 by wiweathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
