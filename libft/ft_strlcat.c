/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:40:44 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/09 11:54:27 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < dstsize)
		dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}

// int	main(void)
// {
// 	char		dst[16] = "hello";
// 	const char	src[]= "comida";
// 	char		dst1[16] = "hello";
// 	const char	src1[] = "comida";

// 	printf("%zu\n", ft_strlcat(dst, src, 3));
// 	printf("%s\n", dst);
// 	printf("%zu\n", strlcat(dst1, src1, 3));
// 	printf("%s\n", dst1);
// 	return (0);
// }
