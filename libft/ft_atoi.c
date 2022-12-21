/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonclus <mmonclus@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:09:19 by mmonclus          #+#    #+#             */
/*   Updated: 2022/12/06 13:21:48 by mmonclus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	numb;
	int	sign;

	i = 0;
	sign = 1;
	numb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
		numb++;
	}
	if (numb > 1)
		return (0);
	numb = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		numb = (str[i] - '0') + (numb * 10);
		i++;
	}
	return (numb * sign);
}

/*
int	main(void)
{
    char	*str = "  34 -234ab567";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}
*/