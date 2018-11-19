/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:31:40 by tmaluh            #+#    #+#             */
/*   Updated: 2018/10/23 14:43:08 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int		main(int argc, char **argv)
{
	int		i;

	i = -1;
	argc--;
	argv++;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}
