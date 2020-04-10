#include <math.h>
#include <stdio.h>
int main()
{
    int a = 0, b = 0, gcd = 0,tmp=0;

    scanf("%d %d",&a, &b);
    int lcm = a * b;
    do
    {
        tmp = a % b;
        a = b, b = tmp;
    } while (tmp != 0);
    gcd = a;
    lcm /= a;
    printf("%d %d", gcd,lcm);

}