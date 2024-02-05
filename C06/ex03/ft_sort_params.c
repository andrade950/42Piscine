/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:26:41 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/23 15:26:43 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	y;

	y = 0;
	while (s1[y] == s2[y] && s1[y] != '\0')
		y++;
	return (s1[y] - s2[y]);
}

char	**ft_sort_arrays(int argc, char **argv)
{
	char	*temp;
	int		z;

	z = 1;
	while (z < argc)
	{
		while (z < argc - 1)
		{
			if (ft_strcmp(argv[z], argv[z + 1]) > 0)
			{
				temp = argv[z + 1];
				argv[z + 1] = argv[z];
				argv[z] = temp;
			}
			z++;
		}
		z = 1;
		argc--;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_arrays(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
