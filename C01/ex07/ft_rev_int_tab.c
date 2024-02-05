/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:10:00 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/14 14:10:03 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	x;

	x = 0;
	while (x < size)
	{
		swap = tab[x];
		tab[x] = tab[size - 1];
		tab[size - 1] = swap;
		x++;
		size--;
	}
}

/*int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	size;
	int	x; 	
	
	size = 6;
	x = 0;
	ft_rev_int_tab(tab, size);
	while (x < size)
	{
		printf("%d", tab[x]);
		x++;
	}
	return (0);
}*/
