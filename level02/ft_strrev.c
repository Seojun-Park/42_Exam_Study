/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:32:07 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 18:40:47 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int i;
	int len;
	int n;
	char tmp;

	i = 0;
	len = 0;
	if(str == NULL)
		return(NULL);
	while(str[len])
		len++;
	n = len - 1
	while(i < (len / 2))
	{
		tmp = str[i];
		str[i] = str[n];
		str[n] = tmp;
		i++;
	}
	return(str);
}
