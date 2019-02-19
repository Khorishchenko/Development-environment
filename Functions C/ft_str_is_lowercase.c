int		ft_str_is_lowercase(char *str)
{
	int	i;
	int	b;

	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			b = 1;
		else
			return (0);
		i++;
	}
	return (b);
}
