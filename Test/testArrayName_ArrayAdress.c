/*
测试数组名作为地址和取数组名的地址的区别
当+1时，
数组名移动了一个元素（注意对于多维数组，一个元素是最高的一个元素）
而取数组名的地址移动了整个数组
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[10][10];
    printf("%p\n", a);
    printf("%p\n\n", a + 1); //移动了 10 * sizeof(int) = 40

    printf("%p\n", &a);
    printf("%p\n\n", &a + 1); //移动了 10 * 10 * sizeof(int) = 400

    printf("%p\n", a[0]);
    printf("%p\n\n", a[0] + 1); //移动了 1 * sizeof(int) = 4

    printf("%p\n", &a[0]);
    printf("%p\n\n", &a[0] + 1); //移动了 10 * sizeof(int) = 40



    return 0;
}