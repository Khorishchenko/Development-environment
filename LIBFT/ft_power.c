/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 08:40:07 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/14 17:39:59 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double		ft_power(float base, int exp)
{
	double	total;

	total = 1;
	if (exp >= 0)
	{
		while (exp-- > 0)
			total *= base;
		return (total);
	}
	else
	{
		while (exp++ < 0)
			total *= base;
		return (1 / total);
	}
}
