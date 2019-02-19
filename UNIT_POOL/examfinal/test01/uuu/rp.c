/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:13:33 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/28 17:07:12 by skhorich         ###   ########.fr       */
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
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		ft_rev_print(argv[1]);
		ft_putchar('\0');
	}
	return (0);
}
