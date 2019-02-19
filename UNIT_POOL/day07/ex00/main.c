/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhorich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 13:40:55 by skhorich          #+#    #+#             */
/*   Updated: 2018/02/15 15:48:15 by skhorich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h> 
#include<stdio.h>
char *ft_strdup(char *src);

int		main(void)
{
	char arrays[] = "-11ggfgrrgrhfufhrhrhruuuuufjffjjf868686868697979797979595959595868866833jjjfjfuggjjgjguyfjfjjfjfurjjrkrkr";
	char *input;

	input = ft_strdup(arrays);

	printf("%s\n", input);

	return (0);
}
