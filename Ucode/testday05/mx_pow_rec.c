#include <stdio.h>

double mx_pow_rec(double n, int pow);

int main(void)
{
    int i,x;
    printf("Enter a number: ");
    scanf("%d%*c%d", &i, &x);
    printf("%f\n", mx_pow_rec(i, x));
    return 0;

}
double mx_pow_rec(double n,int pow)
{
	if ( pow == 0 )
		return 1;
	else if ( pow == 1)
		return n;
	else 
		return n * mx_pow_rec(n, pow - 1);
}	

