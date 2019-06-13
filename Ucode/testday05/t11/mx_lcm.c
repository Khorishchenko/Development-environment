#include <stdio.h>

int mx_lcm(int a, int b);
int mx_gcd(int a, int b);

int main(void)
{
    int x = 435;
    int y = 200;
    printf("%d\n", mx_lcm(x,y));
    return 0;
}

int mx_lcm(int a, int b)
{
    int	lcm;
    if (a < 0)
        a = a * -1;
    else if (b < 0)
        b = b * -1;
	else if (mx_gcd(a, b) == 0)
		return 0;
	lcm = (a * b) / mx_gcd(a, b);
		return lcm;
}
