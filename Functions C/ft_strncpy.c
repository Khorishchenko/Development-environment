char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	char	*t;

	i = -1;
	t = dest;
	while (++i < n)
		*t++ = *str++;
	return (dest);
}
