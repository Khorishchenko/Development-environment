/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 19:13:13 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/23 19:13:35 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char a;
	char b;

	a = 'z';
	b = 'Y';
	while(a >= 'b' || b >= 'A')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a - 2;
		b = b - 2;
	}
	write(1,"\n",1);
	return (0);
}
