/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:57:33 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/28 20:02:26 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	int j;
	char *s;
	char *d;

	i = 0;
	j = 0;
	while ( src[j] != '\0')
		j++;
	s = (char*)malloc(sizeof(*s) * (j + 1));
	if (s == NULL)
		return (NULL);
	d = s;
	free(s);
	*s = 0;
	while (i < j)
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (0);
}

int		main(void)
{
//	char src[] = "hello";
//	ft_strdup(src);
	printf("%s\n", ft_strdup("hello"));
	return (0);
}
