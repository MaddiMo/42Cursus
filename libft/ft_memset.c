/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:18:48 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/14 15:37:01 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)ptr)[i++] = (char)c;
	return (ptr);
}

/* int	main(void)
{
	char ptr[10]= "hellohello";

	printf("%s\n", ft_memset(ptr, 'a', 2));
	printf("%s", memset(ptr, 'a', 2));
	return (0);
}
 */