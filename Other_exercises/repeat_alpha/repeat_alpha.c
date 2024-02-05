/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:01:29 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/25 15:01:30 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	repeat_alpha(char *str)
{
	int	x;
	int	y;
	
	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			y = str[x] - 65;
			while (y >= 0)
			{
				ft_putchar(str[x]);
				y--;
			}
		}
		else if (str[x] >= 'a' && str[x] <= 'z')
		{
			y = str[x] - 97;
			while (y >= 0)
			{
				ft_putchar(str[x]);
				y--;
			}
		}
		else
			ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
