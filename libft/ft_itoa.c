/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:05:24 by mmonclus          #+#    #+#             */
/*   Updated: 2023/01/12 16:43:36 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static long	ft_len(long nb)
{
	long	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*aux;
	char	c;
	long	num;
	int		len;

	c = '\0';
	num = nb;
	len = ft_len(num);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (!aux)
		return (0);
	aux[len] = '\0';
	if (num == 0)
	{
		aux[--len] = c + '0';
		return (aux);
	}
	if (num < 0)
		num = num * -1;
	while (len > 0)
	{
		aux[--len] = num % 10 + '0';
		num = num / 10;
		if (aux[0] == '0')
			aux[0] = '-';
	}
	if (num <= 9)
	{
		aux[len] = num + '0';
	}
	return (aux);
}

int	main(void)
{
	printf("%s", ft_itoa(45));
	return (0);
}
