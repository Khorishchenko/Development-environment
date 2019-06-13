#include <stdio.h>

void mx_cube(int n);
void mx_printchar(char c);

int main(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    mx_cube(i);
    return 0;
}

void mx_cube(int n)
{ 
    if (n > 1)
    {
        for (int y = 1; y <= (n * 2) + (n/2 + 1) + 2; y++)
        {
                if (y <= n/2 + 1)
                    mx_printchar(' ');
                else if ( y == n / 2 + 2 || y == (n * 2) + (n/ 2 + 1) + 2)
                    mx_printchar('+');
                else if (y <= (n * 2) + (n/ 2 + 1) + 1) 
                        mx_printchar('-');
            }
            mx_printchar('\n');
       }
       for (int y = 0; y < n/2; y++)
       {
           for (int j = 1; j <= (n * 2) + (n/2 + 1) + 2; j++)
           { 
            if ( j <= n/2 )
                mx_printchar(' ');
            else if (j == n/2 + 1|| j ==  (n * 2) + (n/2) + 1)
                mx_printchar('/');
            else if ( j == (n * 2) + (n/2) + 2)
                mx_printchar('|');
            else
                mx_printchar(' ');
           }
           mx_printchar('\n');
        }
}
/*
    int y = 0;
    if ( n > 0)
    {
            while (y < (n * 2)  + 2)
            {
                  if ( y == 0 || y ==  ((n * 2)  + 1))

                      mx_printchar('+');
                  else 
                      mx_printchar('-');
                  y++;
            }
            mx_printchar('\n');
    }
} 
*/
/*
    int y = 1;
    if (n > 1)
    {
        while (y < (n * 2) + (n/2 + 1) + 2)
        {
            if ( y <= n/2 )
                mx_printchar(' ');
            else if (y == (n/2 + 1) || y ==  (n * 2) + (n/ 2 + 1) + 1)
                mx_printchar('/');
            else if ( y == (n * 2) + (n/ 2 + 1) + 2)
                mx_printchar('|');
            else
                mx_printchar(' ');
            y++;
        }
        mx_printchar('\n');
    }
}
*/
