#include <stdio.h>
int main()
{
    int BJT = 0, UTC = 0;
    scanf("%d", &BJT);
    UTC = BJT - 800;
    if(UTC<0)
        UTC += 2400;
    printf("%d", UTC);

}