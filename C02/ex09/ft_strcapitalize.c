/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:11:52 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/16 14:39:40 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	x;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str [0] - 32;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (!(str[x - 1] >= 'a' && str[x - 1] <= 'z'))
			{
				if (!(str[x - 1] >= '0' && str[x - 1] <= '9'))
				{
					if (!(str[x - 1] <= 'Z' && str[x - 1] >= 'A'))
					{
						str[x] = str[x] - 32;
					}
				}
			}
		}
		x++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "ola, tudo bem? 42palAvras a quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	
	printf("str: %s", str);
	return (0);
}*/
