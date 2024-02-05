/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:02:08 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:10 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
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
	char	str[] = "AB!CD";

	ft_str_is_uppercase(str);
	return (0);
}*/
