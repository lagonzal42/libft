/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:35:32 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/02 18:08:51 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t n;
	size_t m;
	size_t a;

	a = (ft_strlen(src)) + ft_strlen (dst);
	n = 0;
	m = 0;
	while (dst[n] != '\0' && n < dstsize - 1)
		n++;
	if (n == dstsize - 1)
		dst[n] = '\0';
	else
	{	while (src[m] != '\0' && (dstsize - n - 1) > 0)
		{
			dst[n] = src[m];
			n++;
			m++;
		
		}
		dst[n] = '\0';
	}
	return (a);
}

/*int	main(void)
{
	const char src1[] = "Si claro";
	const char src2[] = "Si claro";
	char dest1[18] = " alli estare";
	char dest2[18] = " alli estare";
	int num1;
	int num2;
	printf("%s\n", src1);
	num1 = strlcat(dest1, src1, 16);
	printf("%d\n", num1);
	printf("%s\n", dest1);
	printf("%s\n", src1);
	num2 = ft_strlcat(dest2, src2, 16);
	printf("%d\n", num2);
	printf("%s\n", dest2);
	return (0);
}*/
