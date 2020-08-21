#include <unistd.h>
#define BUFF 2048

int is_pair(char c, char d)
{
    return ((c == '(' && d == ')') || (c == '{' && d == '}') || (c == '[' && d == ']'));
}

int ft_brackets(char *str)
{
    int j = 0;
    int stk[BUFF];
    int pos = 0;
    while (str[j])
    {
        if (str[j] == '(' || str[j] == '{' || str[j] == '[')
            stk[pos++] = str[j];
        if (str[j] == ')' || str[j] == '{' || str[j] == ']')
            if (!(is_pair(stk[pos--], str[j])))
                return (0);
        j++;
    }
    return (!pos);
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (ac > i)
    {
        if (ft_brackets(av[i]))
            write(1, "OK\n", 3);
        else
            write(1, "Error\n", 6);
        i++;
    }
    return (0);
}