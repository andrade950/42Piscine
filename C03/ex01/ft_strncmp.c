/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:32:55 by joaomart          #+#    #+#             */
/*   Updated: 2024/01/17 11:32:57 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x < n - 1)
		x++;
	return (s1[x] - s2[x]);
}

/*int main() {
    char str1[] = "abc";
    char str2[] = "abd";
    int result = ft_strncmp(str1, str2, 3);
    printf("Test: %d\n", result);

    return 0;
}*/
