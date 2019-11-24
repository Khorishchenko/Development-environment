#include "libmx.h"

int len(long nb);

char *mx_itoa(int number)
{
	char *str;
	int		i;

	i = len(number);
	str = mx_strnew(i);
	str[i--] = '\0';
	if (number == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (number < 0)
	{
		str[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		str[i] = 48 + (number % 10);
		number = number / 10;
		i--;
	}
	return (str);
}

int		len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

