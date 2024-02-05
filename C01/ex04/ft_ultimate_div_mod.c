/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:58:55 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/14 10:58:58 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

//printf("div: %d, mod: %d\n", div , mod);
/*int	main(void)
{
	int	a;
	int	b;
	a = 10;
	b = 5;
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("a: %d, b: %d", a, b);
	return (0);
}*/
