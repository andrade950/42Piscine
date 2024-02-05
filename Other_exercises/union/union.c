/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:55:58 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/30 14:55:59 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	char	arr[127] = {0};
	int	x;
	int	y;
	
	x = 0;
	y = 0;
	while (s1[x])
	{
		y = s1[x];
		if (!(arr[y]))
		{
			arr[y] = 1;
		}
		x++;
	}
	x = 0;
	while (s2[x])
	{
		y = s2[x];
		if (!(arr[y]))
		{
			arr[y] = 1;
		}
		x++;
	}
	x = 0;
	while (s1[x])
	{
		y = s1[x];
		if (arr[y])
		{
			ft_putchar(s1[x]);
			arr[y] = 0;
		}
		x++;
	}
	x = 0;
	while (s2[x])
	{
		y = s2[x];
		if (arr[y])
		{
			ft_putchar(s2[x]);
			arr[y] = 0;
		}
		x++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return (0);
}
