#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a = 9;
    /* 
    %i 可接受2、8、10、16进制。
    %d 只是10进制。signed decimal integer
    */
    scanf("%i", &a);

    printf("%d", a);

    return 0;
}