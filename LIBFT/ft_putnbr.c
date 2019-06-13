/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarnswo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:33:08 by cfarnswo          #+#    #+#             */
/*   Updated: 2017/10/04 08:52:52 by cfarnswo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putc(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (n < 0)
	{
		ft_putc('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n < 10)
		ft_putc(n + 48);
}
