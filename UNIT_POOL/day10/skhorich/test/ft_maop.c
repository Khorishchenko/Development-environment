#include <unistd.h>
#include <stdlib.h>

void    ft_putchar(char c);
//void    ft_putnbr(int nb);

int        *ft_map(int *tab, int length, int (*f) (int))
{
    int *tmp;
    int i;
    
    i = 0;
    tmp = (int*)malloc(sizeof(int) * length);
    while (i < length)
    {
        tmp[i] = f(tab[i]);
        i++;
    }
    return (tmp);
}

int     main(void)
{
    char tab[] = "1,2,3,4,5";
    ft_map(tab, 3, &ft_putchar);
    return (0);
}
