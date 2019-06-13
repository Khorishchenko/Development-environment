/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 07:59:49 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/12 08:34:08 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = malloc(content_size)))
			return (NULL);
		ft_memcpy((node->content), content, sizeof(content));
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
