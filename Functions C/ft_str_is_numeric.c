int		ft_str_is_numeric(char *str)
{
	int	i;
	int	b;

	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			b = 1;
		else
			return (0);
		i++;
	}
	return (b);
}
