/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 19:28:24 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/14 20:00:35 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	while (argc > a)
	{
		while (*argv[a] != '\0')
			ft_putchar(*argv[a]++);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
