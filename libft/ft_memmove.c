/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:51:46 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/14 19:33:12 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	i = -1;
	if (src > dst)
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}

/* int	main(void)
{
	char dst[60] = "hambrehambre";
	char src[60] = "jopelinassaaaaaaaas";

	printf("before: %s\n", dst);
	ft_memmove(dst, src, 8);
	printf("after: %s", dst);
}
  */