/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:03:49 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/26 13:03:51 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
int	main(void)
{
	int	num;
	
	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (num % 3 == 0)
			write(1, "fizz\n", 5);
		else if (num % 5 == 0)
			write(1, "buzz\n", 5);
		else 
		{
			if (num >= 10)
			{
				ft_putchar(num / 10 + 48);
				ft_putchar(num % 10 + 48);
			}
			else 
				ft_putchar(num + 48);
			ft_putchar('\n');
		}
		num++;
	}
}
