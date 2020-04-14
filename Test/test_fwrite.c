#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("1.txt", "w"); //假如打开的是1.txt文件
    fclose(fp);               //这样就清空了内容，简单！
    return 0;
}
