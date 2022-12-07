/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:07:21 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/07 21:53:35 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/* PAQUITO NO LO PASA!!!!
 */

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return (&str[i]);
	return (0);
}

/* int	main(void)
{
	const char s[] = "helso";
	int	c = 'x';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}
 */