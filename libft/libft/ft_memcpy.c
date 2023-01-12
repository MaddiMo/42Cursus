/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:55:31 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/09 10:34:59 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (0);
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}

/* int main(void)
{
	char dst[20] = "hellopeople";
	char src[10] = "nevermind";

	printf("dst before: %s\n", dst);
	printf("dst after: %s\n", ft_memcpy(dst, src, 5));
	printf("dst after: %s", memcpy(dst, src, 5)); 
	return(0);
} */
