int mx_factorial_iter(int n)
{
    int	i;
    int	f;

	if (n >= 2)
	{
		i = 0;
		f = n;
		while (++i < n)
			f = f * (n - i);
		return (f);
	}
	else
		return (1);
}

