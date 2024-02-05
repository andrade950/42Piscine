/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:54:02 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/23 12:54:05 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 1)
	{
		while (argv[0][x] != '\0')
		{
			ft_putchar(argv[0][x]);
			x++;
		}
		ft_putchar('\n');
	}
	return (0);
}
