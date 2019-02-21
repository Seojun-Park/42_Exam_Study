/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:10:11 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 14:19:39 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(int i)
{
	if(i == ' ' || i == '\t' || i == '\v' || i == '\f' || i == '\n')
		return(1);
	return(0);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(ft_isspace(argv[1][i]))
			i++;
		while(!(ft_isspace(argv[1][i]) && argv[1][i]))
				write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return(0);
}
