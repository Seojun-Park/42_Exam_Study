/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bf.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <jinpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:16:08 by jinpark           #+#    #+#             */
/*   Updated: 2020/09/11 15:45:11 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *str)
{
    int tab[2048] = {0};
    int *ptr;
    int i = 0;

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
        else if (*str == '[' && *ptr == 0)
        {
            i = 1;
            while (i != 0)
            {
                str++;
                if (*str == ']')
                    --i;
                if (*str == '[')
                    ++i;
            }
        }
        else if (*str == ']' && *ptr != 0)
        {
            i = 1;
            while (i != 0)
            {
                str--;
                if (*str == '[')
                    --i;
                if (*str == ']')
                    ++i;
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