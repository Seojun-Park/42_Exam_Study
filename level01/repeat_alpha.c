/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:28:27 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 15:23:38 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int letter;

	i = 0;
	if(argc != 2)
		write(1, "\n", 1);
	else
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				letter = argv[1][i] - 65 + 1;
				while(letter > 0)
				{
					write(1, &argv[1][i], 1);
					letter--;
				}
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				letter = argv[1][i] - 97 + 1;
				while(letter > 0)
				{
					write(1, &argv[1][i], 1);
					letter--;
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return(0);
}
