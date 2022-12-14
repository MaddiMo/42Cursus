/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:36:51 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/14 15:36:25 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = 0;
}

/* int	main(void)
{
	char s[60] = "hello";

	printf ("%s\n", &s[1]);
	ft_bzero(s, 2);
	printf ("%s\n", s);
	printf ("%s\n", &s[1]);
	printf ("%s\n", &s[2]);
	return (0);
} */
