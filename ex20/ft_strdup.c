/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:44:21 by tmaluh            #+#    #+#             */
/*   Updated: 2018/10/23 15:52:09 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	i = -1;
	out = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[++i] != '\0')
		out[i] = src[i];
	out[i] = '\0';
	return (out);
}
