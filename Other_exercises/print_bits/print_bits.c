/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:36:38 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/28 12:36:39 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;

	div = 0b10000000;
	while (div)
	{
		if (div & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		div >>= 1;
	}
}

/*int		main(void)
{
	print_bits(2);
}*/
