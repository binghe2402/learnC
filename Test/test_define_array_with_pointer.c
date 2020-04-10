#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
    int *a;
    a = (int*)malloc(sizeof(int) * 6);
    a[0] = 1;
    printf("%d", a[0]);

    int **b;
    b = (int **)malloc(sizeof(int) * 6);
    b[0][0] = 1;
    printf("%d", b[0]);

    return 0;
}
