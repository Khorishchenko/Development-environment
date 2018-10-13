#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str)
{
    int     i;
    int     l;
    char    t;
    
    l = 0;
    while (str[l] != '\0')
        l++;
    i = -1;
    while (++i < --l)
    {
        t = str[i];
        str[i] = str[l];
        str[l] = t;
    }
    return (str);
}

int	main(void)
{
    char str[60];
    scanf("%s", str);
	ft_strrev(str);
    printf("%s\n", str);
	return (0);
}
