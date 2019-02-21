/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 22:24:22 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 22:34:44 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
	return((n &(-n)) == n ? 1 : 0);
}
