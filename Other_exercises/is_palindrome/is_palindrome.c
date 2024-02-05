/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palindorme.c                                    :+:      :+:    :+:   */
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
	write (1, &c, 1);
}

void	is_palindrome(char *str)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (str[y] != '\0')
		y++;
	--y;
	while (str[x] != '\0')
	{
		if (str[x] == str[y])
		{
			str[z] == str[x];
			x++;
			--y;
			z++;
		}
		else
			break;
	}
	str[z] = '\0';
	z = 0;
	while (str[z] != '\0')
	{
		ft_putchar(str[z]);
		z++;
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