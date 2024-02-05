/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:25:01 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/21 09:25:03 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	len_dest;
	size_t	res;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	res = len_dest;
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dest)
		res += len_src;
	else
		res += size;
	while (*src && len_dest < size - 1)
	{
		dest[len_dest] = *src;
		len_dest++;
		src++;
	}
	dest[len_dest] = '\0';
	return (res);
}

/*int	main(void)
{
	char dest[20] = "Hello";
	char *src = "' world!";
	
	size_t result = ft_strlcat(dest, src, sizeof(dest));
	
	printf("Resultado: %s\n", dest);
	printf("Comprimento total: %zu\n", result);
	return (0);
}*/
