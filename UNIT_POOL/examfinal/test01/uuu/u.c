/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:55:49 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/28 17:13:54 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	if (argc == 2)
	{
		while (argv[1][a] != '\0')
		{
			if (argv[1][a] >= 'A' && argv[1][a] <= 'Z')
				ft_putchar(argv[1][a] + 32);
			else if (argv[1][a] >= 'a' && argv[1][a] <= 'z')
				ft_putchar(argv[1][a] - 32);
			else
				ft_putchar(argv[1][a]);
			a++;
		}
		ft_putchar('\n');
		}
	else
		ft_putchar('\n');
	return (0);
}
