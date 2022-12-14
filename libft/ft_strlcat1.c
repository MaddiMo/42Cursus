/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:12:41 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/07 20:28:01 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

size_t	ft_strlcat1(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/* int	main(void)
{
	char		dst[] = "hola";
	const char	src[]= "comida";
	char		dst1[] = "hola";
	const char	src1[]= "comida";

	printf("%zu\n", ft_strlcat1(dst, src, 7));
	//printf("%zu\n", strlcat(dst1, src1, 7));
	printf("%s\n", dst);
	printf("%s\n", dst1);
	return (0);
}
 */