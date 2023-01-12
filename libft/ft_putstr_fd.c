/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:27:33 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/21 12:18:56 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (s && fd)
		while (s[++i])
			write(fd, &s[i], 1);
}

/* int	main(void)
{
	char s[]	= "hellooooo";

	ft_putstr_fd (s, 1);
	return (0);
}
 */