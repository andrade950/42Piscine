/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:46:17 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/29 10:46:18 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n')
	{
		x++;
	}
	while (str[x] != ' ' && str[x] != '\t' && str[x] != '\n' && str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
		return (0);
	}
	else
		ft_putchar('\n');
	return (0);
}
