/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sar.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:32:28 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/28 16:55:36 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_replace(char *d, char a, char b)
{
	int i;

	i = 0;
	while (d[i] != '\0')
	{
		if (d[i] == a)
			ft_putchar(b);
		else
			ft_putchar(d[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[3][1] != '\0' || argv[2][1] != '\0'))
			ft_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
