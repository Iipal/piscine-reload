/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:18:56 by tmaluh            #+#    #+#             */
/*   Updated: 2018/10/23 16:18:57 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *filename)
{
	int		fd;
	char	ch;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &ch, 1))
		write(1, &ch, 1);
	close(fd);
}
