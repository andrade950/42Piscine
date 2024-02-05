/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:29:34 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/25 15:29:36 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ulstr(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
			ft_putchar(str[x]);
			x++;
		}
		else if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
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
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
