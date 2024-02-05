/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:14:02 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/28 12:14:03 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Y')
		{
			str[x] = str[x] + 1;
			ft_putchar(str[x]);
			x++;
		}
		else if (str[x] >= 'a' && str[x] <= 'y')
		{
			str[x] = str[x] + 1;
			ft_putchar(str[x]);
			x++;
		}
		else if (str[x] == 'Z' || str[x] == 'z')
		{
			str[x] = str[x] - 25;
			ft_putchar(str[x]);
			x++;
		}
		else
		{
			ft_putchar(str[x]);
			x++;
		}
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
