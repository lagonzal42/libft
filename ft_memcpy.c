/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:38:29 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/02 19:25:57 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*#include<string.h>
#include<stdio.h>*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t m;

	m = 0;
	while (m < n)
	{
		((unsigned char *)dst)[m] = ((unsigned char *)src)[m];
		m++;
	}
	return (dst);
}
	
/*{
	size_t	m;

	m = 0;
		while (((unsigned char *)src)[m] != '\0' && m < n - 1)
		{	
			((unsigned char *)dst)[m] = ((unsigned char *)src)[m];
			m++;
		}
		((unsigned char *)dst)[m] = ((unsigned char *)src)[m];
	return (dst);
}*/

/*int	main(void)
{
	char src[] = "";
	char dst[] = "";
	printf("%s\n", src);
	printf("%s\n", dst);
	memcpy(dst, src, 2);
	printf("%s\n", src);
	printf("%s\n", dst);
	return (0);
}*/
