/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:40:50 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/22 16:40:52 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

/*int	ft_fibonacci(int index)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 1;
	if (index < 0)
		return (-1);
	if (index >= 0 && index <= 1)
		return (index);
	while (index > 1)
	{
		x = y + z;
		y = z;
		z = x; 
		index--;
	}
	return (x);
}*/
/*int	main(void)
{
	int num = 9;
    	ft_fibonacci(num);

    	return 0;
}*/
