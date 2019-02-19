/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkozlovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:27:32 by vkozlovs          #+#    #+#             */
/*   Updated: 2018/02/21 23:13:08 by vkozlovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		a;

	a = 0;
	tmp = begin_list;
	while (tmp)
	{
		a++;
		tmp = tmp->next;
	}
	return (a);
}
