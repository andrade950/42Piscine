/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:56:09 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/31 11:56:10 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	int	x;
	int	y;
	
	x = 97;
	y = 0;
	while (x <= 122)
	{
		if (x % 2 == 0)
		{
			y = x - 32;
			ft_putchar(y);
		}
		else
			ft_putchar(x);
		x++;
	}
	ft_putchar('\n');
	return (0);
}
