/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:03:09 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/09 12:17:08 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (((char *)s)[i] != (char)c)
	{
		if (((char *)s)[i] == '\0')
			return (0);
		i++;
	}
	return (&((char *)s)[i]);
}

/* int	main(void)
{
	const char s[] = "hello-";
	int	c = 'e';

	printf("%s\n", ft_strchr(s, 'e'));
	printf("%s", strchr(s, 'e'));
} */
