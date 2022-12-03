/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:14:36 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/03 18:23:46 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n)
{
	int	i;
	int	j;
	
	dest = "holita";
	src = "li";
	i = 0;
	j = 0;
	while (dest[i] && i < n)
		i++;
	while (src[i] )