#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *str)
{
    int tab[2048] = {0};
    int *ptr;
    int cnt;

    cnt = 0;
    ptr = tab;
    while (*str)
    {
        if (*str == '>')
            ptr++;
        else if (*str == '<')
            ptr--;
        else if (*str == '+')
            ++(*ptr);
        else if (*str == '-')
            --(*ptr);
        else if (*str == '.')
            write(1, ptr, 1);
        else if (*str == ']' && *ptr == 0)
        {
            cnt = 1;
            while (cnt != 0)
            {
                str++;
                if (*str == ']')
                    --cnt;
                if (*str == '[')
                    ++cnt;
            }
        }
        else if (*str == '[' && *ptr != 0)
        {
            cnt = 1;
            while (cnt != 0)
            {
                str++;
                if (*str == '[')
                    --cnt;
                if (*str == ']')
                    ++cnt;
            }
        }
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        brainfuck(av[1]);
    return (0);
}