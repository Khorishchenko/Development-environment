/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruhs-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 13:03:53 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/18 19:55:16 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_brute_force_c(int **sudoku)
{
	int r;
	int k;
	int i;
	int q;

	r = 0;
	while (r < 9)
	{
		if (sudoku[r][0] != 0)
		{
			i = 0;
			while (i < 9)
			{
				if(sudoku[i][0] == 0)
				{
					q = -1;
					while (++q < 9)
					{
						if(sudoku[r][0] == sudoku[i][q])
						{
							sudoku[i][q] = 0;
						}
					}
				}
			i++;
			}
		}
		r++;
	}
}


int		ft_brute_force_r(int *sud)
{
}

void	set_default_value(int ***sudoku, char **argv, int a, int i)
{
	int q;

	if (argv[i + 1][a] >= 48 && argv[i + 1][a] <= 57)
	{
		sudoku[i][a] = malloc(sizeof(int) * 1);
		sudoku[i][a][0] = argv[i + 1][a] - 48;
	}
	else
	{
		sudoku[i][a] = malloc(sizeof(int*) * 9);
		q = -1;
		while (++q < 10)
		sudoku[i][a][q] = q;
	}
}

int		main(int argc, char **argv)
{
	int ***sudoku;
	int i;
	int a;

	i = -1;
	if (argc != 10)
		write(1, "Error\n", 6);
	else if (argc == 10)
	{
		sudoku = (int ***)malloc(sizeof(int***) * 9);
		while (++i < 9)
		{
			sudoku[i] = (int **)malloc(sizeof(int**) * 9);
			a = -1;
			while(++a < 9)
			{
				set_default_value(sudoku, argv, a, i);
			}
			ft_brute_force_c(sudoku[i]);
		}
	}

	printf("%d", sudoku[0][0][0]);
	
	for (int z = 0; z < 9; z++)
	{
		for (int x = 0; x < 9; x++)
		{
			if(sudoku[z][x][0] == 0)
			{
				for(int c = 0; c < 10; c++)
				{
					printf("%d", sudoku[z][x][c]);
				}
				printf(" ");
			}
			else
				printf("%d", sudoku[z][x][0]);
			printf(" ");
		}
		printf("\n");
	}
	return (0);
}
