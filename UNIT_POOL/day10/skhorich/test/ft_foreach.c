/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:49:57 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/19 17:29:53 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar( char c)
{
    write(1, &c, 1);
}

void    ft_foreach(int *tab, int length, void (*f) (int))
{
    int i;
    
    i = 0;
    while (i < lenght)
    {
        f(tab[i]);
        i++;
    }
}

int main(void)
{
    char tab[] = "123456";
    ft_foreach(tab, 6, &ft_foreach);
    return (0);
}
