#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    if (str)
        while (str[i])
            i++;
    return (i);
}

int main(int ac, char **av)
{
    static int ispal[1000][1000];
    int len;
    char *s;
    int i;
    int j;
    int left;
    int right;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    s = av[1];
    len = ft_strlen(s);
    right = 0;
    left = 0;
    j = 1;
    while (j < len)
    {
        i = 0;
        while (i < j)
        {
            if (s[i] == s[j] && (ispal[i + 1][j - 1] || j - i <= 2))
            {
                ispal[i][j] = 1;
                if (j - i >= right - left)
                {
                    left = i;
                    right = j;
                }
            }
            i++;
        }
        j++;
    }
    write(1, &s[left], right - left + 1);
    write(1, "\n", 1);
    return (0);
}