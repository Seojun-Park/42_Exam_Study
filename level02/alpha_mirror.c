/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:42:40 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 17:54:33 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char ltr;

	if(argc == 2)
	{
		while(argv[1][i])
		{
			ltr = argv[1][i];
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ltr = 'z' - argv[1][i] + 'a';
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ltr = 'Z' - argv[1][i] + 'a';
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
