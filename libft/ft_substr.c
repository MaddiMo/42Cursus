/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:39:59 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/19 18:20:01 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (!aux)
		return (0);
	i = 0;
	while (start > ft_strlen(s))
	{	
		aux[i] = '\0';
		return (aux);
	}
	while (len > 0 && s[start])
	{
		aux[i] = s[start];
		i++;
		start++;
		len--;
	}
	aux[i] = '\0';
	return (aux);
}

/* int	main(void)
{
	char s[] = "hola";

	printf("%s\n", ft_substr(s, 2, 30));
	return (0);
}
 */