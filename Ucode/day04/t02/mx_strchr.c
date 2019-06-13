#include <stdio.h>

char *mx_strchr(const char *s, int c);

int main(void)
{
    char *numbers = "01233210";
    char *three = mx_strchr(numbers, '3');
    printf("%c\n", *three);
    return 0;
}

char *mx_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
