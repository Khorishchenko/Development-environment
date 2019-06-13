int mx_sqrt(int x)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	while (racine <= x / 2)
	{
		sqrt = racine * racine;
		if (sqrt == x)
		{
			return (racine);
		}
		racine = racine + 1;
	}
	return (0);
}
