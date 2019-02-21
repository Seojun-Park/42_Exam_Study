/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:42:08 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/21 13:25:55 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2 && argv[1][0])
	{
		while(argv[1][i] != '\0')
			i++;
		i = i - 1;
		while(argv[1][i] == ' ' && i > 0) // jump the spaces
			i--;
		while(argv[1][i] != ' ' && i > 0) // got into last word
			i--;
		if(argv[1][i] == ' ' && i > 0)
			i++;
		while(argv[1][i] != '\0' &&  argv[1][i] != ' ')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	return(0);
}
