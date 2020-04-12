#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
    指针*ptr指向了字符串常量"test",字符串常量位于内存的代码段，是只读的
    由于是常量，所以是只读的，strcpy会导致Segmentation fault
         误//所以char *ptr实际是 const char *ptr
    不，char *ptr 就是char*, 这个指针变量是可变的，不可变的只是它指向的字符串常量。

    而使用数组定义的字符串则是可写的，实际上就是将字符串常量的值赋给了数组
    */
    char *ptr = "test";
    // strcpy(ptr, "TEST");

    char arr[] = "check";
    strcpy(arr, "CHECK");

    ptr = arr;
    printf("%s",ptr);

    return 0;
}