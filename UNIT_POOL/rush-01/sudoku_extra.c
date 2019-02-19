
#include "sudoku_main.h"

void	ft_putchar ( char c)
{
     write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    int         count;
    int         b [ 10 ];
    
    count = 0 ;
    если (nb < 0 )
    {
        ft_putchar ( ' - ' );
        nb = -nb;
    }
    if (nb == 0 )
    {
        ft_putchar (nb + 48 );
    }
    в то время как (nb> 0 )
    {
        b [count] = nb% 10 ;
        подсчитывать ++;
        nb / = 10 ;
    }
    while (count> 0 )
    {
        count--;
        ft_putchar (b [count] + 48 );
    }
}

void    ft_print_puzzle ( int ** головоломка)
{
    int i;
    int j;
    
    i = 0 ;
    j = 0 ;
    в то время как (i < 9 )
    {
        тогда как (j < 8 )
        {
            ft_putnbr ((головоломка [i] [j]));
            ft_putchar ( '  ' );
            j ++;
        }
        ft_putnbr (головоломка [i] [j]);
        ft_putchar ( ' \ n ' );
        j = 0 ;
        я ++;
    }
}

int         is_available ( int ** puzzle, int row, int col, int num)
{
    int row_start;
    int col_start;
    int i;
    
    row_start = (строка / 3 ) * 3 ;
    col_start = (col / 3 ) * 3 ;
    i = 0 ;
    в то время как (i < 9 )
    {
        if (головоломка [строка] [i] == num)
            return ( 0 );
        if (головоломка [i] [col] == num)
            return ( 0 );
        if (puzzle [row_start + (i% 3 )] [col_start + (i / 3 )] == num)
            return ( 0 );
        я ++;
    }
    return ( 1 );
}
