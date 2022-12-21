/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:42:26 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/19 16:08:09 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	size_t	i;

	i = 0;
	aux = (char *)malloc(count * size);
	if (!aux)
		return (0);
	while (i < count * size)
	{
		((char *)aux)[i] = '\0';
		i++;
	}
	return (aux);
}

/* int	main(void)
{
	printf("%s", calloc(4, 5));
	printf("%s", ft_calloc1(4, 5));
	return (0);
}
 */