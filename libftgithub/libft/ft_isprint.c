/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiweathe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 18:09:05 by wiweathe          #+#    #+#             */
/*   Updated: 2018/04/21 09:37:34 by wiweathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isptrint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
