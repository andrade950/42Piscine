/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:57:47 by joaomart          #+#    #+#             */
/*   Updated: 2024/02/01 12:57:48 by joaomart         ###   ########.fr       */
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
	int	y;
	
	x = 0;
	y = 0;
	if (argc > 1)
	{
		while (*argv[argc - 1])
		{
			write(1, argv[argc - 1]++, 1);
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
