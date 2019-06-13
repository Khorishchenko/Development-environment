#include <stdio.h>

int mx_gcd(int a, int b);

int main(void)
{
    int a,b;
    printf("Enter a numbers: ");
    scanf("%d%*c%d", &a, &b);
    printf("%d\n", mx_gcd(a, b));
    return 0;
}

int mx_gcd(int a, int b)
{
    if ( a < 0)
        a = a * -1;
    else if (b < 0)
        b = b * -1;
    else if ( a == b)
        return a;
    else if ( a > b) {
        int y = a;
        a = b;
        b = y;
    }
    return mx_gcd(a , b - a);
}
