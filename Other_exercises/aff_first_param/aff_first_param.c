/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:54:01 by joaomart          #+#    #+#             */
/*   Updated: 2024/02/01 12:54:02 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc > 1)
	{
		while (argv[1][x] != '\0')
		{
			ft_putchar(argv[1][x]);
			x++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
