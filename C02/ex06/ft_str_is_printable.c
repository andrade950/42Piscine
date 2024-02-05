/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:11:24 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/16 11:11:27 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 127)
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
	char	str[] = "	";

	ft_str_is_printable(str);
	return (0);
}*/
