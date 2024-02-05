/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:25:39 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/27 16:25:40 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		x;
	int		y;
	int		z;

	s = malloc(sizeof(strs));
	x = 0;
	z = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			s[z++] = strs[x][y++];
		y = 0;
		while (sep[y] != '\0' && x != size - 1)
			s[z++] = sep[y++];
		x++;
	}
	s[z] = '\0';
	return (s);
}

/*int main(void)
{
    char *strs1[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    char *result1 = ft_strjoin(6, strs1, "//");
    printf("%s\n", result1);
    free(result1);

    return 0;
}*/
