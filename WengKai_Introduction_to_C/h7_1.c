#include <math.h>
#include <stdio.h>
#include <string.h>

int main()

{
    int Polynomial[101] = {0};
    int n = 1, i = 0;
    while (n)
    {
        scanf("%d", &n);
        scanf("%d", &Polynomial[n]);
        i++;
    }
    n = 1;
    while (n)
    {
        int add;
        scanf("%d", &n);
        scanf("%d", &add);
        Polynomial[n] += add;
        i++;
    }
    char ans[500];
    ans[0] = 0;
    for (int i = 100; i >= 0; i--)
    {

        if (Polynomial[i])
        {
            char op[2] = {0};
            //判断是否最高位，即结果字符串是否为空,以及系数正负。若非最高位且正系数，则输出正号
            op[0] = (strlen(ans) && Polynomial[i] > 0) ? '+' : 0;

            //判断系数是否为±1
            char coefficient[100] = {0};
            if (Polynomial[i] == -1)
                coefficient[0] = '-';
            else if (abs(Polynomial[i]) != 1)
                sprintf(coefficient, "%d", Polynomial[i]);

            //判断幂指数是否为1或0
            char power[4] = {0};
            switch (i)
            {
            case 0:
                sprintf(coefficient, "%d", Polynomial[i]);
                break;
            case 1:
                power[0] = 'x';
                break;
            default:
                sprintf(power, "x%d", i);
                break;
            }

            //拼接字符串
            strcat(ans, op);
            strcat(ans, coefficient);
            strcat(ans, power);
        }
    }
    if (!ans[0])
        sprintf(ans, "0", i);

    printf("%s", ans);

    return 0;
}
