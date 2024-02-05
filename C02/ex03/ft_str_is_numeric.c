/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:50:50 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/15 17:00:17 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= '0' && str[x] <= '9')
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
	char	str[] = "12!34";

	ft_str_is_numeric(str);
	return (0);
}*/
