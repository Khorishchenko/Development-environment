nt			ft_recursive_factorial(int nb)
{
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
