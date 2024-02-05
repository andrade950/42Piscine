/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:29:26 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/25 16:29:27 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rev_print(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	while (x > 0)
	{
		x--;
		ft_putchar(str[x]);
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
