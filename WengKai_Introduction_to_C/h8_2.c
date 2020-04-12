#include <stdio.h>
#include <string.h>
#define NUM(x) ((x)-48)
_Bool identify(char *, const char *);
_Bool verify(char *);
int *getBTC(char *, int *);

int main(int argc, char const *argv[])
{
    char gpsstr[200] = "";
    char cache[200] = "";
    while (strcmp(cache, "END"))
    {
        scanf("%s", cache);
        if (identify(cache, "$GPRMC") && verify(cache))
            strcpy(gpsstr, cache);
    }
    int BTC[3];
    getBTC(gpsstr, BTC);
    printf("%02d:%02d:%02d", BTC[0], BTC[1], BTC[2]);
    return 0;
}

_Bool identify(char *str, const char *GPSSTRING)
{
    return !strncmp(str, GPSSTRING, strlen(GPSSTRING));
}

_Bool verify(char *str)
{
    int ver = 0;
    for (int i = 1; str[i] != '*'; i++)
    {
        if (str[i] != ',')
            ver = ver ^ str[i];
    }
    char verstr[3];
    sprintf(verstr, "%X", ver%65536);
    int len = strlen(str);
    return !strcmp(verstr, str + len - 2);
}
int *getBTC(char *str, int *BTC)
{
    BTC[0] = (NUM(str[7]) * 10 + NUM(str[8]) + 8) % 24;
    BTC[1] = NUM(str[9]) * 10 + NUM(str[10]);
    BTC[2] = NUM(str[11]) * 10 + NUM(str[12]);
    return BTC;
}
