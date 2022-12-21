/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:40:44 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/09 16:36:51 by mmonclus         ###   ########.fr       */
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
	return (i + ft_strlen(src));
}

/* int	main(void)
{
	char		dst[] = "hellopeople";
	const char	src[]= "comi";
	char		dst1[] = "hellopeople";
	const char	src1[] = "comi";

	printf("%zu\n", ft_strlcat(dst, src, 13));
	printf("%zu\n", strlcat(dst1, src1, 13));
	return (0);
}
 */