/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 10:49:07 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/24 11:21:35 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void third (int r, int c, int x, int y)
{
    if ( r == y && c == x && r != 1 && c !=1 )
        ft_putchar('a');
    else if( r == y && c == 1 && r != 1 )
        ft_putchar('c');
    else if ( r == y && r != 1)
        ft_putchar('b');
    if ( c == x && r == y && r != 1)
        ft_putchar('\n');
}

void second(int r, int c, int x ,int y)
{
    if((r > 1 && r < y && c == 1 ) || (r > 1 && r < y && c == x))
        ft_putchar('b');
    else if( r != 1 && r != y)
        ft_putchar(' ');
    if(c == x && r != 1 && r != y)
        ft_putchar('\n');
}

void first (int r, int c , int x)
{
    if( r == 1 && c == 1 )
        ft_putchar('a');
    else if( r == 1 && c == x)
        ft_putchar('c');
    else if ( r == 1)
        ft_putchar('b');
    if (c == x && r == 1)
        ft_putchar ('\n');
}

void rush(int x, int y)
{
    int r;
    int c;
    
    r = 0;
    while (++r <= y)
    {
        c = 0;
        while(++c <= x)
        {
            first(r, c, x);
            second(r, c, x, y);
            third(r, c, x, y);
        }
    }
}

int		main(void)
{
    rush(5, 3);
    return (0);
}

