/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:51:50 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 13:55:08 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc > 1)
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i++], 1);
		}
		write(1, "\n", 1);
	}
	return(0);
}