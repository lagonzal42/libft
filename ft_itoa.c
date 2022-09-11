/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:17:00 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/08 21:17:11 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_numlen(int n)
{
	size_t	i;
	
	i = 1;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*ft_nb2str(char **s,int n, size_t *i)
{
	while (*i > 1)
	{
		if (n >= 10)
		{	
			*i = *i - 1;
			s[0][*i] = (n % 10) + '0';
			*s = ft_nb2str(s, n / 10, i);
		}
		else 
		{	
			*i = *i - 1;
			s[0][*i] = n + '0';	
		}
}
	return(*s);
}
char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;
	int		sign;

	sign = 1;
	if (n < 0)
	{		
		n = n * -1;
		sign = -1;
	}
	i = ft_numlen(n);
	if (sign < 0)
		i++;
	s = malloc ((i + 1) * sizeof(char));
	if (!s)
		return(NULL);
	if (sign < 0)
		s[0] = '-';
	s[i] = '\0';	
	s = ft_nb2str(&s ,n, &i);
	return (s);
}

int	main(void)
{
	int	n;
	char	*s;
	n = -453;
	s = ft_itoa(n);
	printf("%s\n", s);
	free(s);
	return (0);
}
