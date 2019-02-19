/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 12:50:08 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/12 14:03:31 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
		ft_putnbr(nb *= -1);
    }
    else if (nb < 10)
    {
        ft_putchar(nb + 48);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + 48);
    }
}

int main(void)
{
	ft_putnbr(100);
    return(0);
}
