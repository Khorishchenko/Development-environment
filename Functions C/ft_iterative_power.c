int		ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 0;
	p = nb;
	while (++i < power)
		p = p * nb;
	return (p);
}
