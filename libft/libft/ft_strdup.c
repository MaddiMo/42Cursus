/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:08:08 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/19 17:55:53 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*aux;

	i = 0;
	aux = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!aux)
		return (0);
	while (s1[i])
	{
		aux[i] = ((char *)s1)[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	char	s1[] = "hellooo";

	printf("%s\n", ft_strdup(s1));
	printf("%s", strdup(s1));
}
 */