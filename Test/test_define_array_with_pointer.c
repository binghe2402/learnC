#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *a;
    a = (int *)malloc(sizeof(int) * 6);
    a[0] = 1;
    printf("%d\n", a[0]);

    int (*b)[2];
    (*b)[2] = (int (*)[2])malloc(sizeof(int) * 6);
    b[0][0] = 1;
    printf("%d\n", b[0][0]);

    return 0;
}
