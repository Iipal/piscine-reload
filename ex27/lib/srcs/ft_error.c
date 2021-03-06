/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:19:34 by tmaluh            #+#    #+#             */
/*   Updated: 2018/10/23 16:19:36 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_error(int ac)
{
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	if (ac <= 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	return (1);
}
