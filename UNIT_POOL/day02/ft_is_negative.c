/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 13:18:36 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/08 17:24:47 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(void)
{
	int n;

	scanf("%d", &n);
	if (n < 0)
	{
		printf("N \n");
	}
	else if (n >= 0)
	{
		printf("P \n");
	}
}
