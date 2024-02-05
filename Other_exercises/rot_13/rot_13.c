/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:09:31 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/26 12:09:33 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	rot_13(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'M') || (str[x] >= 'a' && str[x] <= 'm'))
		{
			str[x] = str[x] + 13;
			ft_putchar(str[x]);
			x++;
		}
		else if ((str[x] >= 'N' && str[x] <= 'Z') || (str[x] >= 'n' && str[x] <= 'z'))
		{
			str[x] = str[x] - 13;
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

int	main (int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
