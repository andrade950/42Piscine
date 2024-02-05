/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:40:33 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/23 09:40:35 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	bn;

	bn = nb / 2;
	x = 0;
	if (nb < 0)
		return (0);
	while ((x * x) != nb)
	{
		if (x > bn)
			return (0);
		x++;
	}
	return (x);
}

/*int	main(void)
{
	int	num;
	num = 2147483647;
	
	
	printf("%d" , ft_sqrt(num));
	return (0);
}*/
