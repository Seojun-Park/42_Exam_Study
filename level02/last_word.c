/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 22:40:54 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 22:46:28 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		while(argv[1][i] >= argv[1][0])
		{
			if(argv[1][i] == ' ')
			{
				while(argv[1][i] != '\0')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
			else if(argv[1][i] == argv[1][0])
			{
				write(1, &argv[1][i] , 1);
				i++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return(0);
}
