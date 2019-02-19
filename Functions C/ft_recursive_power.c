int			ft_recursive_power(int nb, int power)
{
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
