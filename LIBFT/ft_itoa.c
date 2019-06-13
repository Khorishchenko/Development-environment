/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:18:17 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/16 15:00:18 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		placevalues(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		++i;
		n = -n;
	}
	while (n / 10 >= 1 || n / 10 <= -1)
	{
		++i;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int				index;
	char			*mem;

	index = placevalues(n);
	if (!(mem = (char*)malloc((1 + index) * (sizeof(char)))))
		return (NULL);
	mem[index--] = '\0';
	if (n == -2147483648 && (mem[index--] = '8'))
		n /= 10;
	if (n < 0)
	{
		n = -n;
		while (index > 0 && (mem[index--] = '0' + n % 10))
			n /= 10;
		mem[index] = '-';
	}
	else
		while (index >= 0 && (mem[index--] = '0' + n % 10))
			n /= 10;
	return (mem);
}
