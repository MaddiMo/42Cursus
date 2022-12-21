/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:07:21 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/15 14:46:38 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{	
		if (s[i] == (char)c)
			ptr = (char *)&s[i];
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	const char s[] = "heselso";
	int	c = 's';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}
  */