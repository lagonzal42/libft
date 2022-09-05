/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:57:06 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/05 16:03:29 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_atoi(const char *nptr)
{
	int	num;
	int	n;
	int	sign;

	num = 0;
	sign = 1;
	n = 0;
	while ((nptr[n] >= 9 && nptr[n] <= 13) || nptr[n] == 32)
		n++;
	if (nptr[n] == '+' || nptr[n] == '-')
	{
		if (nptr[n] == '-')
		{
			sign = -1;
		}
		n++;
	}
	while (nptr[n] >= '0' && nptr[n] <= '9' - '0' )
	{
		num = (num * 10) + (nptr[n]);
		n++;
	}
	return (num * sign);
}

/*int	main(void)
{
	char	nptr[] = "0";

	printf("%d\n", atoi(nptr));
	printf("%d\n", ft_atoi(nptr));
	return (0);
}*/
