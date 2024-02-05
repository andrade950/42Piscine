/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:35:51 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/22 13:35:53 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	n;

	fact = nb;
	n = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		fact = fact * n;
		nb--;
		n--;
	}
	return (fact);
}

/*int	main(void)
{
	int num = 5;
    	int result = ft_iterative_factorial(num);
    
   	printf("O fatorial de %d é: %d\n", num, result);

    	return 0;
}*/
