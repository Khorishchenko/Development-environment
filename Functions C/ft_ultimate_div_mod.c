void		ft_ultimate_div_mod(int *a, int *b)
{
	int t;

	if (b != 0)
	{
		t = *a;
		*a = *a / *b;
		*b = t % *b;
	}
}
