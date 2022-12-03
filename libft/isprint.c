/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:20:45 by mmonclus          #+#    #+#             */
/*   Updated: 2022/11/29 12:40:26 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf ("%d", ft_isprint(' '));
	return (0);
}
