/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 08:24:14 by osamoile          #+#    #+#             */
/*   Updated: 2018/03/28 08:24:49 by osamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content_size = content_size;
	if (content != 0)
		lst->content = ft_strsub(content, 0, content_size);
	else
	{
		lst->content = 0;
		lst->content_size = 0;
	}
	lst->next = 0;
	return (lst);
}