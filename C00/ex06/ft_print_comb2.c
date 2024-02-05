/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:17:24 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/12 10:17:30 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(char a, char b, char c, char d)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	if (a == 9 && b == 9 && c == 9 && d == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	
	a = 0;
	b = 0;
	c = 0;
	d = 1;
	
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					for (d = 1; d < 10; ++d)
 					{
    						print_combination(a, b, c, d);
    						d = Fd;
  					}
				}
				for (c = 1; c < 10; ++c)
 				{
    					print_combination(a, b, c, d);
  				}
			}
		}
	}
	
	
	/*while (d <= 9)
	{
		for (d = 1; d < 10; ++d)
 		{
    			print_combination(a, b, c, d);
  		}
  		while (c <= 9)
		{
			for (c = 1; c < 10; ++c)
 			{
    			print_combination(a, b, c, d);
  			}	
		}	
	}*/
	
	
	
	
	/*while (a <= 9)
	{		
		while (b <= 9)
		{			
			while (c <= 9)
			{				
				while (d <= 9)
				{
					print_combination(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}*/
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
