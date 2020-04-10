#include <math.h>
#include <stdio.h>
float f(float x, float aa[4])
{
    return aa[3] * x * x * x + aa[2] * x * x + aa[1] * x + aa[0];
}

int main()
{
    float aa[4] = {0}, a = 0, b = 0, root = 0, fmid = 0;
    scanf("%f %f %f %f", &aa[3], &aa[2], &aa[1], &aa[0]);
    scanf("%f %f", &a, &b);

    while (root = (a + b) / 2, fabs(a - b) > 0.01)
    {
        float fa = f(a, aa);
        float fb = f(b, aa);
        if (fa * fb < 0)
        {
            fmid = f(root, aa);
            if (fmid == 0)
                break;
            else if (fa / fmid > 0)
                a = root;
            else
                b = root;
        }
        else if (fa == 0)
        {
            root = a;
            break;
        }
        else if (fb == 0)
        {
            root = b;
            break;
        }
    }

    printf("%.2f", root);
    return 0;
}