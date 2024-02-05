/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:23:51 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/15 13:23:54 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A' || str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

//printf("0");
//printf("1");
/*int	main(void)
{
	char	str[] = "Abc!def";

	ft_str_is_alpha(str);
	return (0);
}*/
