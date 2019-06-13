/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 09:24:44 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 21:23:44 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == 0)
		return ;
	if (*alst == 0)
		return ;
	del(&((*alst)->content), (*alst)->content_size);
	*alst = NULL;
}
