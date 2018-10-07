#include <stdio.h>

void	ft_ultimate_ft(int **nbr)
{
	**nbr = 42;
}

int	main(void)
{
    int nb = 0;
    int *nbr;
    int **nbr;
	 
    *nbr = &nb;
    **nbr = *nbr;
    
	ft_ultimate_ft(**nbr);
	printf("%d\n", nb);
}
