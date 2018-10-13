/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:01:54 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/28 18:34:45 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int    ft_atoi(char *str)
{
    int nb;
    int i;
    int minus;
    
    i = 0;
    while ((str[i] == '\v') || (str[i] == '\f') || (str[i] == '\t') ||
                (str[i] == '\r') || (str[i] == '\n') || (str[i] == ' '))
            i++;
    if (str[i] == 45)
    {
            minus = -1;
            i++;
    }
    while ((str[i] > 48) && (str[i] < 58))
        {
            nb *= 10;
            nb += str[i] - 48;
            i++;
        }
    if (minus == -1)
    {
        nb = nb * minus;
    }
    return nb;
}

int     main()
{
    char str1[] = "hhhff";
    printf("%d\n", ft_atoi(str1));
    return 0;
}
