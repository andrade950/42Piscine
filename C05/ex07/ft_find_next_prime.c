/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:06:15 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/23 12:06:18 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	x;

	if (nb < 2)
		return (2);
	x = 2;
	while (x <= nb / 2)
	{
		if (nb % x == 0)
		{
			while (nb % x == 0)
				nb++;
		}
		x++;
	}
	return (nb);
}

//printf("%d", nb);
/*int	main(void)
{
	int	num;
	num = 0;
	
	ft_find_next_prime(num);
	return (0);
}*/
