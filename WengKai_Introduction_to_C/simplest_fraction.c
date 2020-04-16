#include <stdio.h>
int gcd(int x, int y);
int main(int argc, char const *argv[]) {
    int a, b,c;
    scanf("%d/%d", &a, &b);
    c = gcd(a, b);
    printf("%d/%d", a / c, b / c);

    return 0;
}
int gcd(int x, int y)
{
    int c = 1;
    while(c){
        c = x % y;
        x = y;
        y = c;
    }
    return x;
}