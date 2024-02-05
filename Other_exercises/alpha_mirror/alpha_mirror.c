/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:39:21 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/28 12:39:22 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	alpha_mirror(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			ft_putchar('m' - (str[x] - 'n'));
		else if (str[x] >= 'A' && str[x] <= 'Z')
			ft_putchar('M' - (str[x] - 'N'));
		else
			ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
