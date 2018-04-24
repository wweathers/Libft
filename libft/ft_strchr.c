/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiweathe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 18:49:04 by wiweathe          #+#    #+#             */
/*   Updated: 2018/04/21 18:52:34 by wiweathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (s[i] >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
