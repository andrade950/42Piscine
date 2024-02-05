/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:15:28 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/11 15:15:34 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alph;

	alph = 'a';
	while (alph <= 'z')
	{
		ft_putchar(alph);
		alph++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
