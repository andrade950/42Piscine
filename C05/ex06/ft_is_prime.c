/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:23:51 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/23 10:23:53 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2)
		return (0);
	x = 2;
	while (x <= nb / 2)
	{
		if (nb % x == 0)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

//printf("0");
//printf("1");
/*int	main(void)
{
	int	num;
	num = 11;
	
	ft_is_prime(num);
	return (0);
}*/
