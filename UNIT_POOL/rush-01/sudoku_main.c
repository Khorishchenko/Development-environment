
# включить  " sudoku_main.h "

int         build_board2 ( int ** puzzle, int row, int col, int i)
{
    в то время как (i < 9 )
    {
        if ( is_available (головоломка, строка, col, i + 1 ))
        {
            головоломка [строка] [col] = i + 1 ;
            если ((col + 1 ) < 9 )
            {
                if ( build_board (головоломка, строка, col + 1 ))
                    return ( 1 );
                еще
                puzzle [row] [col] = 0 ;
            }
            else  if ((строка + 1 ) < 9 )
            {
                if ( build_board (головоломка, строка + 1 , 0 ))
                    return ( 1 );
                еще
                puzzle [row] [col] = 0 ;
            }
            еще
            return ( 1 );
        }
        я ++;
    }
    return ( 0 );
}

int         ** ft_error ( void )
{
    write ( 1 , « Ошибка! \ n » , 7 );
    return ( 0 );
}

int         build_board ( int ** puzzle, int row, int col)
{
    int i;
    
    if (строка < 9 && col < 9 )
    {
        if (головоломка [строка] [col]! = 0 )
        {
            если ((col + 1 ) < 9 )
            return ( build_board (головоломка, строка, col + 1 ));
            else  if ((строка + 1 ) < 9 )
                return ( build_board (головоломка, строка + 1 , 0 ));
            еще
            return ( 1 );
        }
        еще
        {
            i = 0 ;
            return ( build_board2 (головоломка, строка, col, i));
        }
        return ( 0 );
    }
    еще
    return ( 1 );
}

int         ** ft_create_puzzle ( char ** argv)
{
    int ** головоломка;
    int i;
    int j;
    
    i = 1 ;
    j = 0 ;
    puzzle = ( int **) malloc ( sizeof ( int *) * 9 );
    тогда как (i < 10 )
    {
        puzzle [i - 1 ] = ( int *) malloc ( sizeof ( int ) * 9 );
        в то время как (j < 9 )
        {
            if (argv [i] [j] == 0 )
                return ( ft_error ());
            if ((argv [i] [j] - ' 0 ' ) < 0 )
                головоломка [i - 1 ] [j] = 0 ;
            еще
            puzzle [i - 1 ] [j] = (argv [i] [j] - ' 0 ' );
            j ++;
        }
        j = 0 ;
        я ++;
    }
    возвращение (головоломка);
}

int         main ( int argc, char ** argv)
{
    int ** головоломка;
    
    если (argc! = 10 )
    {
        write ( 1 , « Ошибка! \ n » , 7 );
        return ( 0 );
    }
    puzzle = ft_create_puzzle (argv);
    if (puzzle == 0 )
    {
        return ( 0 );
    }
    if ( build_board (головоломка, 0 , 0 ))
        ft_print_puzzle (головоломка);
    еще
    write ( 1 , « Ошибка! \ n » , 7 );
    return ( 0 );
}
