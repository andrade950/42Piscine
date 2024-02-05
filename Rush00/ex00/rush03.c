/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:10:30 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/14 14:47:35 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char left, char center, char right)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
		{
			ft_putchar(left);
		}
		else 
		{
			if (j == x - 1)
			{
				ft_putchar(right);
			}
			else
			{
				ft_putchar(center);
			}
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			print_line(x, 'A', 'B', 'C');
		}
		else
		{
			if (i == y - 1)
				print_line(x, 'A', 'B', 'C');
			else
				print_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}
