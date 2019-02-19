/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:15:23 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/25 17:11:46 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int a;

	a = 0;
	if (ac == 2)
	{
		while (av[1][a] != '\0')
		{
			if (av[1][a] >= 'A' && av[1][a] <= 'Z')
				ft_putchar(av[1][a] + 32);
			else if (av[1][a] >= 'a' && av[1][a] <= 'z')
				ft_putchar(av[1][a] - 32);
			else
				ft_putchar(av[1][a]);
			a++;
		}
	}
	ft_putchar('\n');
	return (0);
}
