	ft_putchar(char c);

int 	main(int argc, char *argv[])
{
	int i;

	i = argc;
	while (i-- > 1)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			*argv[i]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
