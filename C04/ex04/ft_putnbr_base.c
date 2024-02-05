/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:43:24 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/21 10:43:27 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			++j;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		++i;
	}
	i = 0;
	while (base[i] != '\0')
		++i;
	return (i);
}

void	i_base(int nbr, int base, char *chars)
{
	if (nbr < base)
	{
		ft_putchar(chars[nbr % base]);
	}
	else
	{
		i_base(nbr / base, base, chars);
		ft_putchar(chars[nbr % base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = len(base);
	if (l >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			i_base((nbr / l) * -1, l, base);
			ft_putchar(base[nbr % l * -1]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			i_base(nbr * -1, l, base);
		}
		else
			i_base(nbr, l, base);
	}
}

/*int main(void) {
    //base binária (01)
    int number1 = 42;
    char base1[] = "01";
    ft_putnbr_base(number1, base1);
    write(1, "\n", 1);

    //base octal (01234567)
    int number2 = 123;
    char base2[] = "0123456789";
    ft_putnbr_base(number2, base2);
    write(1, "\n", 1);

    //base hexadecimal (0123456789ABCDEF)
    int number3 = 255;
    char base3[] = "0123456789ABCDEF";
    ft_putnbr_base(number3, base3);
    write(1, "\n", 1);

    return 0;
}*/
