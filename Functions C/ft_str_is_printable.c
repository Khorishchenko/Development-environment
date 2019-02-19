int		ft_str_is_printable(char *str)
{
	int	i;
	int	b;

	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			b = 1;
		else
			return (0);
		i++;
	}
	return (b);
}
