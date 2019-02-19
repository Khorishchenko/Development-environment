/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 09:04:52 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/15 12:35:19 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char	*ft_strdup(char *src)
{

}
*/
#include <stdlib.h>
#define LEN		42

void	ft_putchar(char c);

void	ft_putstr(char  *str);

int		main ()
{
	int i;
	char	*str;

	str = (char*) malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while( i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	return (0);
}
