/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   af.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:16:52 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/27 15:32:18 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		ft_putstr(argv[argc - 1]);
	return (0);
}
