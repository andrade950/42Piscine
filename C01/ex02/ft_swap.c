/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:54:05 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/14 09:54:09 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;
	
	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	
	ft_swap(ptra, ptrb);
	
	printf("a: %d, b: %d", a, b);
	return (0);
}*/
