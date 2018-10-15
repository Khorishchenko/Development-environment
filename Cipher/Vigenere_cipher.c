#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main (int argc, char  **argv[])
{
	int alph = 1;

	for (int i = 0, n = strlen(argv[1]); i < n; i++)
	{
		if((argv[1][i] > 90 && argv[1][i] < 97) 
			|| argv[1][i] < 65 || argv[1][i] > 122)
        	alph = 0;
    	}

    	if (argc != 2 || alph == 0)
    	{
        	printf("not a valid key\n");
        	return 1;
    	}

    	char 	p[100];
	scanf("%s", p);

    	for (int i = 0, j = 0, np = strlen(p), nk = strlen(argv[1]); i < np; i++)
    	{
        	if (p[i] >= 65 && p[i] <= 90)
        	{
            		if (argv[1][j] >= 65 && argv[1][j] <= 90) 
				p[i] = (p[i] - 65 + arg[1][j] - 65)%26 + 65;
            		else if (argv[1][j] >= 97 && argv[1][j] <= 122) 
				p[i] = (p[i] - 65 + argv[1][j] - 97)%26 + 65;
            		j++;
        	}
        	else if (p[i] >= 97 && p[i] <= 122)
        	{
            		if (argv[1][j] >= 65 && argv[1][j] <= 90) 
				p[i] = (p[i] - 97 + argv[1][j] - 65)%26 + 97;
            		else if (argv[1][j] >= 97 && argv[1][j] <= 122) 
				p[i] = (p[i] - 97 + argv[1][j] - 97)%26 + 97;
            		j++;
        	}
        	printf("%c", p[i]);
        	if(j == nk) 
			j = 0;
    }
    printf("\n");
    return 0;
}
