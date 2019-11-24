#include "libmx.h"

int	ft_atoi(char *str);

int main(int argc, char **argv)
{

	if (argc < 2 || argc > 2) 
	{
		write(1, "usage: ./pathfinder [file_name]\n", 33); 			// проверка №1
     	exit(1);
	}

	int fb;


	fb = open(argv[1], O_RDONLY);

	if (fb == -1) 
	{
        char str1[] = "error: file ";							// проверка №2
        char str2[] = " doesn't exist";
        write(1, &str1, mx_strlen(str1));
		write(1, argv[1], mx_strlen(argv[1]));
		write(1, &str2, mx_strlen(str2));
		write(1, "\n", 1);
        exit(1);
    }

    char *str = mx_file_to_str(argv[1]);

	if (!mx_strcmp(str,"\0")) 
	{
		char str1[] = "error: file ";
		char str2[] = " is empty";
		write(1, &str1, mx_strlen(str1));
		write(1, argv[1], mx_strlen(argv[1]));				// проверка №3
		write(1, &str2, mx_strlen(str2));
		write(1, "\n", 1);
		exit(1);
	}

	mx_proverka(str);
	mx_gram(str, argv[1]);

	return 0;
}


