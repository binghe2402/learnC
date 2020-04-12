/*
拿填满的字符数组和字符串比较，结果是字符串比字符数组小1.不知道为什么，输出b[4]结果也不是-1

知道了。
对于strcmp(),不同的系统返回值有可能不一样，取决于系统的实现。有的系统分别返回-1,0,1。在另外的一些系统中，有可能值返回ASCII的差值。
这里返回的是-1,0,1
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
    char a[4] = "asd";
    char b[3] = {'a','s','d'};
    char c[4] = "asa";
    // printf("%d\n",a[4]-b[4]);
    printf("%d\n",strcmp(a,b));
    printf("%d",strcmp(a,c));
    return 0;
}