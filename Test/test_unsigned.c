#include <stdio.h>
int test(int);
int main(int argc, char const *argv[]) {
    unsigned int a = 12;
    int b,c;
    b = -a;
    c = test(-a);
    printf("%d %d %d %d", b,-a,(-a)*2,c);
    return 0;
}
int test(int x){
    return 2 * x;
}