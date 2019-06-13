/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 10:24:20 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/09 10:45:18 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_gcf(unsigned int a, unsigned int b)
{
	unsigned int		temp;

	if (a == 0 || b == 0)
		return (0);
	if (b > a)
	{
		temp = a;
		a = b;
		b = temp;
	}
	while (a % b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return (b);
}
