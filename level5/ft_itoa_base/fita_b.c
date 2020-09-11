#include <stdlib.h>
#include <stdio.h>
#define abs(v) (v) < 0 ? -(v) : (v)

void ib(int n, int b, char *res, int *p)
{
    char *str = "0123456789ABCDEF";
    if (n >= b || n <= -b)
        ib(n / b, b, res, p);
    res[(*p)++] = str[abs(n % b)];
}

char *ft_itoa_base(int value, int base)
{
    int p = 0;
    char *res;

    if ((base < 2 || base > 16) || !(res = (char *)malloc(sizeof(char) * 35)))
        return NULL;
    if (value < 0 && base == 10)
        res[p++] = '-';
    ib(value, base, res, &p);
    res[p] = '\0';
    return (res);
}

int main(void)
{
    char *tmp;

    tmp = ft_itoa_base(123451, 16);
    printf("%s\n", tmp);
    return (0);
}