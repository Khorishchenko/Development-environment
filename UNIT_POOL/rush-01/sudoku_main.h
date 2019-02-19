# IfNDef SUDOKU_MAIN_H
# define  SUDOKU_MAIN_H
# include  < stdlib.h >
# включить  < unistd.h >

void     ft_putchar ( char c);

void     ft_putnbr ( int nb);

void     ft_print_puzzle ( int ** puzzle);

int         is_available ( int ** puzzle, int row, int col, int num);

int         build_board ( int ** puzzle, int row, int col);

# endif
