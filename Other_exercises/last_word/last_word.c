/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:24:36 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/26 09:24:38 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int	x;
	
	x = 0;
	while (str[x] != '\0')
		x++;
	x -= 1;
	while (str[x] != ' ' || str[x] == '\t')
		x--;
	while ((str[x] != ' ' && str[x] != '\t') && x >= 0)
		x--;
	x += 1;
	while (str[x] && str[x] != ' ' && str[x] != '\t')
	{
		ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
