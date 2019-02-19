/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:29:22 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/28 16:13:03 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_alpha(char *av)
{
	int a;
	int c;

	a = 0;
	c = 0;
	while (av[a] != '\0')
	{
		if (av[a] >= 'a' && av[a] <= 'z')
			c = av[a] - 97;
		while (c > 0)
		{
			ft_putchar(av[a]);
			c--;
		}
		if (av[a] >= 'A' && av[a] <= 'Z')
			c = av[a] - 65;
		while (c > 0)
		{
			ft_putchar(av[a]);
			c--;
		}
		ft_putchar(av[a]);
		a++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_repeat_alpha(av[1]);
		ft_putchar('\n');
	}
	return (0);
}
