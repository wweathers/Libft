/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiweathe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:46:47 by wiweathe          #+#    #+#             */
/*   Updated: 2018/05/07 17:48:30 by wiweathe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t value)
{
	size_t i;

	i = 0;
	while (i < value && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
