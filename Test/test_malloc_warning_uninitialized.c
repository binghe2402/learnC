/*
gcc会给未初始化的 malloc() 报warning吗？
不会
*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
    int *a;
    a = (int *)malloc(20*sizeof(int));

    printf("%d", a[0]);

    return 0;
}