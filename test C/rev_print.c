/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:12:34 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/27 19:58:06 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_print(char *argv)
{
	int a;

	a = 0;
	while (argv[a] != '\0')
		a++;
	while (a >= 0)
	{
		ft_putchar(argv[a]);
		a--;
	}
}

int		main(int argc, char **argv)
{
	if ( argc != 2)
		ft_putchar('\n');
	else
	{
		ft_rev_print(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
