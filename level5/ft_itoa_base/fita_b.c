#include <stdlib.h>
#define abs(v) (v) < 0 ? -(v) : (v)

void ib(int v, int b, char *res, int *p)
{
    char *base = "0123456789ABCDEF";

    if (v >= b || v <= -b)
        ib(v, b, res, p);
    res[(*p)++] = base[abs(v % b)];
}

char *ft_itoa_base(int value, int base)
{
    int p = 0;
    char *res;

    if (((base < 2 || base > 16) || !(res = (char *)malloc(sizeof(char) * 35))))
    {
        return NULL;
    }
    if (value < 0 && base == 10)
        res[p++] = '-';
    ib(value, base, res, &p);
    res[p] = '\0';
    return (res);
}