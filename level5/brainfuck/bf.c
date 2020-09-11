/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bf.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <jinpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:16:08 by jinpark           #+#    #+#             */
/*   Updated: 2020/09/11 14:28:54 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *str)
{
    int tab[2048] = {0};
    int *ptr;
    int cnt;

    ptr = tab;
    cnt = 0;
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
        else if (*str == '[' && *ptr == 0)
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
        else if (*str == ']' && *ptr != 0)
        {
            cnt = 1;
            while (cnt != 0)
            {
                str--;
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