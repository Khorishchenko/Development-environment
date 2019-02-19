char	*ft_strcpy(char *dest, char *src)
{
	char	*t;

	t = dest;
	while ((*t++ = *src++) != 0)
		;
	return (dest);
}
