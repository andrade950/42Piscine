/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:37:42 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/14 17:37:50 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	x;

	x = 0;
	while (x < (size - 1))
	{
		if (tab[x] > tab[x + 1])
		{
			swap = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = swap;
			x = 0; 
		}
		else
		{
			x++;
		}
	}
}

/*int	main(void)
{
	int	tab[] = {5, 3, 8, 9, 0, 1};
	int	size;
	int	x; 	
	
	size = 6;
	x = 0;
	ft_sort_int_tab(tab, size);
	while (x < size)
	{
		printf("%d", tab[x]);
		x++;
	}
	return (0);
}*/
