/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 07:43:07 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/09 10:59:10 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*head;
	t_list		*current;

	if (!lst)
		return (NULL);
	head = (*f)(lst);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		if (!(current->next = (*f)(lst)))
		{
			free(current->next);
			return (NULL);
		}
		current = current->next;
	}
	return (head);
}
