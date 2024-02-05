/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:12:45 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/17 14:12:48 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && nb > 0)
	{
		dest[j] = src[i];
		i++;
		j++;
		nb--;
	}
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
    char dest[] = "Hello ";
    char src[] = "world!";
    
    ft_strncat(dest, src, 6);

    printf("%s\n", dest);

    return 0;
}*/
