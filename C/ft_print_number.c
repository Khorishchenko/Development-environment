/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:06:26 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/26 14:27:25 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

int		main(void)
{
	ft_print_number();
	ft_putchar('\n');
	return (0);
}
