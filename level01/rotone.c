/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 16:01:06 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 16:05:18 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char alu;
	char ald;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			alu = argv[1][i] + 1;
			ald = argv[1][i] - 25;
			if((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
				write(1, &alu, 1);
			else if(argv[1][i] == 'z' || argv[1][i] == 'Z')
				write(1, &ald, 1);
			else
				write(1, &argv[1][i], 1);
			i++;;
		}
	}
	write(1, "\n", 1);
	return(0);
}
