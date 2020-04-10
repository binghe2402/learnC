#include <math.h>
#include <stdio.h>
int main()
{
    char c;
    int x = 0, y = 0;
    _Bool ERROR = 0;

    scanf("%d", &x);
    scanf("%c", &c);
    while (c != '=')
    {
        scanf("%d", &y);
        switch (c)
        {
        case '+':
            x = y + x;
            break;
        case '-':
            x = x - y;
            break;
        case '*':
            x = x * y;
            break;
        case '/':
            if (y == 0)
                ERROR = 1;
            else
                x = x / y;
            break;
        default:
            ERROR = 1;
        }

        scanf("%c", &c);
    }

    if (ERROR)
        printf("ERROR");
    else
        printf("%d", x);
}