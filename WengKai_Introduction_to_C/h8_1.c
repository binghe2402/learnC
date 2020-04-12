#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int cnt = 0;
    int i = 0;

    while (1)
    {
        scanf("%s", str);
        for (i = 0, cnt = 0; str[i]; i++)
        {
            if (str[i] == '.')
            {
                if (cnt > 0)
                    printf("%d", cnt);
                goto END;
            }
            else
                cnt++;
        }
        printf("%d ", cnt);
    }
END:

    return 0;
}