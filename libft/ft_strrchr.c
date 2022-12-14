/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:07:21 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/09 18:20:16 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{	
		if (s[i] == (char)c)
			ptr = &s[i];
		i++;
	}
	return ((char *)ptr);
}

/* int	main(void)
{
	const char s[] = "heselso";
	int	c = 's';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}
  */