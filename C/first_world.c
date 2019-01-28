/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:13:40 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/27 20:40:32 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int a;
	
	a = 0;	
	if (argc != 2)
		write(1, "\n", 1);
	while (argv[1][a] != '\0')
	{		
		if (argv[1][a] == '\t' || argv[1][a] == ' ' || argv[1][a] == '\n')
			write(1, "\n", 1);
		else
			write(1, &argv[1][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
