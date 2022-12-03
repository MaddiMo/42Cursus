/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:20:45 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/03 18:23:51 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	str[50];

	size_t len = 5;
	int c = '5';

	printf ("%d", ft_memset(str, c , 5));
	return (0);
}
