#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
    指针*ptr指向了字符串常量"test",字符串常量位于内存的代码段，是只读的
    由于是常量，所以是只读的，strcpy会导致Segmentation fault
    所以char *ptr实际是 const char *ptr

    而使用数组定义的字符串则是可写的，实际上就是将字符串常量的值赋给了数组
    */
    char *ptr = "test";
    strcpy(ptr, "TEST");

    char arr[] = "test";
    strcpy(arr, "TEST");

    return 0;
}