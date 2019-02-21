/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:22:21 by jinpark           #+#    #+#             */
/*   Updated: 2019/02/20 18:31:27 by jinpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *dst;
	int len;
	int i;

	i = 0;
	len = 0;
	while(src[len])
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if(dst == NULL)
		return(NULL);
	while(i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}
