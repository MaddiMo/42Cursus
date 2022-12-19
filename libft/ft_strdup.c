/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:59:21 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/19 11:23:56 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)malloc((strlen(s1) + 1) * sizeof(char));
	if (!aux)
		return (0);
	while (s1[i])
	{
		aux[i] = s1[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	char s1[] = "tengo hambre";

	printf("%s\n", strdup(s1));
	printf("%s", ft_strdup(s1));
	return (0);
}
 */