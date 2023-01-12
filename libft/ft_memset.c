/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:18:48 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/09 10:17:48 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (char)c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char ptr[10]= "hellohello";

	printf("%s\n", ft_memset(ptr, 'x', 4));
	printf("%s", memset(ptr, 'x', 4));
	return (0);
} */
