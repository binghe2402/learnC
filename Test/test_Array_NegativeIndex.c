#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int a = 12345;
    int b = 23;

    /*  
    当下面一行执行的时候，可以用c[-1]来输出a，但是注释掉就不行了,不知道为什么 
    而且换成别的printf也不行。
    */

    printf("%p\n", &a);

    printf("%d\n", c[-1]);

    int *p = &c[5];
    printf("%d\n", p[-2]);

    return 0;
}