/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikotvits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 12:21:40 by ikotvits          #+#    #+#             */
/*   Updated: 2018/02/11 19:44:42 by ikotvits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void first(int r, int c, int x, int y)
{
	if (r == 1 && c == 1)
		ft_putchar('/');
	else if (r == 1 && c == x)
		ft_putchar(92);
	else if (r == 1)
		ft_putchar('*');
	if (c == x && r == 1)
		ft_putchar('\n');
}

void second(int r, int c, int x, int y)
{
	if ((r > 1 && r < y && c == 1) || (r > 1 && r < y && c == x))
		ft_putchar('*');
	else if (c > 1 && c < x && r == y && r != 1 && r != y)
		ft_putchar('*');
	else if (r != 1 && r != y)
		ft_putchar(' ');
	if (c == x && r!= 1 && r != y)
		ft_putchar('\n');	
}

void third(int r, int c, int x, int y)
{
	
	if (r == y && c == x && r != 1 && c != 1)
		ft_putchar('/');
	else if (r == y && c == 1 && r != 1)
		ft_putchar(92);
	else if (r == y && r != 1)
		ft_putchar('*');
	if (c == x && r == y && r != 1)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int r;
	int c;

	r = 0;
	while (++r <= y)
	{
		c = 0;
		while (++c <= x)
		{
			first(r, c, x, y);
			second(r, c, x, y);
			third(r, c, x, y);
		}
	}
}

int        main(void)
{
    rush(10, 15);
    return (0);
}
