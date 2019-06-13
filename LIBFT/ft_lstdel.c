/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 10:54:28 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/12 08:27:38 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*current;

	while (*alst != NULL)
	{
		current = *alst;
		(*del)(current->content, current->content_size);
		(*alst) = (*alst)->next;
		free(current);
		current = NULL;
	}
	alst = NULL;
}
