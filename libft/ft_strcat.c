/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:10:42 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/07 18:15:04 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dst[i] == 0 || src[j] == 0)
		return (0);
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int	main(void)
{
	char		dst[] = "hola";
	const char	src[]= "no";

	printf("%s", ft_strcat(dst, src));
	return (0);
}
*/