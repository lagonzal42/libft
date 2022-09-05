/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:31:05 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/05 16:07:58 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include<unistd.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	m;

	m = 0;
	if (n == 0)
		return (NULL);
	while (m < n - 1 && ((unsigned char *)s)[m] != '\0'
			&& ((unsigned char *)s)[m] != (unsigned char)c)
		m++;
	if (((unsigned char *)s)[m] != (unsigned char)c)
		return (NULL);
	else
		return ((void *)s + m);
}

/*int	main(void)
{
	char	s[] = "012345";
	int		c = 2;

	char *s2 = memchr("teste", 1024, 6);
	char *s3 = ft_memchr("teste", 1024, 6);
	write(1, &s2, 6);
	write(1, &s3, 6);
}*/
