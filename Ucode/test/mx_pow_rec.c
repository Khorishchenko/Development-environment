ouble mx_pow_rec(double n,int pow)
{
	if ( pow == 0 )
		return 1;
	else if ( pow == 1)
		return n;
	else 
		return n * mx_pow_rec(n, pow - 1);
}	

