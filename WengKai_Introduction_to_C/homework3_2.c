#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", 1);
    for (int i = 3; i <= n; i += 2)
    {
        printf(" ");
        printf("%d", i);
    }
}