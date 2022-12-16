/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:17:52 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/15 14:33:40 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
	return (0);
}

/* int	main(void)
{
	char	*s = "hola";
	int		c = 'a';

	printf("%s\n", ft_memchr(s, c, 8));
	printf("%s", memchr(s, c, 8));
}
 */