/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiweathe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 18:14:07 by wiweathe          #+#    #+#             */
/*   Updated: 2018/04/20 18:15:22 by wiweathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}