int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		*s1++;
		*s2++;
		i++;
	}
	return (0);
}
