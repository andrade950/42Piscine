/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:26:25 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/16 10:26:29 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			x++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

//printf("0");
//printf("1");
/*int	main(void)
{
	char	str[] = "ab!cd";

	ft_str_is_lowercase(str);
	return (0);
}*/
