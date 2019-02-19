/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:31:17 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/19 18:23:20 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int *tmp;
	int i;

	i = 0;
	tmp = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
