/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bf.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <jinpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:16:08 by jinpark           #+#    #+#             */
/*   Updated: 2020/09/11 13:20:27 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *str)
{
    int tab[2048] = {0};
    int *ptr;
    int loop_cnt;

    ptr = tab;
    loop_cnt = 0;
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
            loop_cnt = 1;
            while (loop_cnt != 0)
            {
                str++;
                if (*str == ']')
                    --loop_cnt;
                if (*str == '[')
                    ++loop_cnt;
            }
        }
        else if (*str == ']' && *ptr != 0)
        {
            loop_cnt = 1;
            while (loop_cnt != 0){
                str++;
                if (*str == ']')
                    --loop_cnt;
                if (*str == ']')
                    ++loop_cnt;
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