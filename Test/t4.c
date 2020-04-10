#include <math.h>
#include <stdio.h>
void speak(int n)
{
    char *pronuce[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    printf("%s", pronuce[n]);
}
int main()
{
    int num = 0;
    int digit[6] = {0};
    scanf("%d", &num);
    int i = 0;
    if (num < 0)
    {
        printf("fu ");
        num = -num;
    }
    for (i = 0; num != 0; i++)
    {
        digit[i] = num % 10;
        num /= 10;
    }

    speak(digit[i - 1]);
    for (i -= 2; i >= 0; i--)
    {
        printf(" ");
        speak(digit[i]);
    }
    return 0;
}