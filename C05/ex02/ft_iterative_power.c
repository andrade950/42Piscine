/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:29:35 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/22 15:29:37 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--; 
	}
	return (result);
}

/*int	main(void)
{
	int num = 5;
	int pot = 0;
    	int result = ft_iterative_power(num, pot);
    
   	printf("O %d elevado a %d é: %d\n", num, pot, result);

    	return 0;
}*/
