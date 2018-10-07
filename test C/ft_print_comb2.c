#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    char hren[4];
    hren[0] = 0;
    hren[1] = 0;
    hren[2] = 0;
    hren[3] = 1;

    while (!((hren[0] == 9) && (hren[1] == 9)))
    {
        ft_putchar(hren[0] + 48);
        ft_putchar(hren[1] + 48);
        ft_putchar(' ');
        ft_putchar(hren[2] + 48);
        ft_putchar(hren[3] + 48);
        if (!((hren[0] == 9) && (hren[1] == 8)))
        {
                ft_putchar(',');
                ft_putchar(' ');
        }
        hren[3]++;
        if ((hren[3] = hren[3] % 10) == 0)
            hren[2] = (hren[2] + 1);
        if (hren[2] == 10)
        {
	    if (hren[0] == 9)
	    {
              hren[2] = hren[0] + 1;
	      if (hren[2] == 10)
		 hren[2] = 0;
	    }
	    else 
		hren[2] = hren[0];
            hren[1]++;
            if ((hren[1] = hren[1] % 10) == 0)
	    {
                hren[0]++;
		hren[2] = hren[0];
	    }
            hren[3] = hren[1] + 1;
	    if (hren[3] == 10)
		hren[3] = 0;
        }
    }
}

int     main(void)
{
        ft_print_comb2();
        ft_putchar('\n');
        return (0);
}
