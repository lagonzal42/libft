/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:35:32 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/07 14:12:17 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

/*{
	size_t n;
	size_t m;

	n = ft_strlen(dst);	
	if (n >= dstsize || src[n] == '\0')
		return (dstsize);
	m = 0;
	while (src[m] != '\0' && dstsize - n - 1 > 0)
	{
		dst[n++] = src[m++];
	}
	return (n + m);
}*/

{
	int	n;
	size_t	m;
	size_t	len;

	len = ft_strlen(dst);
	n = 0;
	m = 0;
	while (dst[n] != '\0' && n < (int)dstsize - 1)
		n++;
	while (src[m] != '\0' && ((int)dstsize - n - 1) > 0)
	{
		dst[n++] = src[m++];
	}
	if (n == 0)
		n = ft_strlen(src) + dstsize;
	if (n != 0 && n > (int)len)
		dst[n] = '\0';
	if (dstsize > len)
		return(ft_strlen(dst));
	else 
		return(n);
}
/*{
	size_t	n;
	size_t	odstl;
	
	odstl = ft_strlen(dst);
	while (dst[n] != '\0' && n < dstsize - 1)
		n++;

}
*/
int	main(void)
{
	const char src1[] = "lorem ipsum dolor sit amet";
	const char src2[] = "lorem ipsum dolor sit amet";
	char dest1[] = "rrrrrr^@^@^@^@a^@^@^@^@";
	char dest2[] = "rrrrrr^@^@^@^@a^@^@^@^@";
	size_t	num1;
	int num2;
	printf("%s\n", src1);
	num1 = strlcat(dest1, src1, -1);
	printf("%zu\n", num1);
	printf("%s\n", dest1);
	printf("%s\n", src1);
	num2 = ft_strlcat(dest2, src2, -1);
	printf("%d\n", num2);
	printf("%s\n", dest2);
	return (0);
}
