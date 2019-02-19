/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:40:05 by vkozlovs          #+#    #+#             */
/*   Updated: 2018/02/21 23:16:15 by vkozlovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
