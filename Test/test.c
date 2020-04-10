#include <stdio.h>

int main()
{
    int num = 0, digit = 0, i = 1, code = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        num = num / 10;
        if (num = i % 2)
        {
            code += (0b1 << (i - 1));
        }
        i++;
    }
    printf("%d", code);
    return 0;
} 