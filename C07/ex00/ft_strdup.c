/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:03:14 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/25 12:03:17 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	new = malloc(sizeof(char) * size + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int main() {
    char original[] = "hello";
    char *copied = ft_strdup(original);

    if (copied == NULL) {
        printf("Erro.\n");
        return 1;
    }

    printf("String original: %s\n", original);
    printf("String copiada: %s\n", copied);

    free(copied);

    return 0;
}*/
