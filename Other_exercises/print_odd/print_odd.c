/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_odd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:36:38 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/28 12:36:39 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_odd(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		if (x % 2 == 0)
			x++;
		else
		{
			ft_putchar(str[x]);
			x++;
		}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_odd(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}