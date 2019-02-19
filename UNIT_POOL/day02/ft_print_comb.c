/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 17:29:55 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/08 20:30:00 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char g_num[3];

	g_num[0] = 48;
	while (g_num[0] <= 57)
	{
		g_num[1] = g_num[0] + 1;
		while (g_num[1] <= 57)
		{
			g_num[2] = g_num[1] + 1;
			while (g_num[2] <= 57)
			{
				ft_putchar(g_num[0]);
				ft_putchar(g_num[1]);
				ft_putchar(g_num[2]);
				if (g_num[0] != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				g_num[2] += 1;
			}
			g_num[1] += 1;
		}
		g_num[0] += 1;
	}
}
