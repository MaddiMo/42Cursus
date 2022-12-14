/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:34:23 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/14 19:59:09 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		x;
	size_t	contador;

	if (s1 && s2)
	{	
		if (strlen(((int*)s1)) > strlen(s2))
			return ();
		if (strlen(s1) < strlen(s2))
			return ();
		if (strlen(s1) == strlen(s2))
			return ()
	}
	return (0);
}

int	main(void)
{
	char 	s1[3] = "aaa";
	char	s2[3] = "bbb";

	printf("%d", s1 - s2);
	ft_memcmp(s1, s2, 1);
	printf("%d", s1 - s2);
}