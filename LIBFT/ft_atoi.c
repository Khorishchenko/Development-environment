/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:33:24 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/09/30 12:27:29 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(char const *str)
{
	int		total;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	total = 0;
	while (str[0] == '\n' || str[0] == ' ' || str[0] == '\t'
			|| str[0] == '\v' || str[0] == '\r' || str[0] == '\f')
		++str;
	if (str[0] == '+')
		++str;
	else if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
		total = total * 10 + (str[i++] - '0');
	return (sign * total);
}
