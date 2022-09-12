#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	m;

	m = 0;
	n = 0;
	while (dst[n] && n < dstsize - 1)
		n++;
	while (src[m] && (dstsize - n) > 1)
		dst[n++] = src[m++];
	if (dstsize > 0)
		dst[n] = '\0';
	else if (dstsize == 0)
		n = ft_strlen(src) + dstsize;
	return (n);
}

int	main()
{
	const char src1[] = "lorem ipsum dolor sit amet";
	const char src2[] = "lorem ipsum dolor sit amet";
	char dest1[] = "12345\0 78989";
	char dest2[] = "12345\0 78989";
	size_t num1;
	size_t num2;
	printf("original dest is %s\n", dest1);
	num1 = strlcat(dest1, src1, 1);
	printf("return value for strlcat %zu\n", num1);
	printf("dest berria %s da, src %s da", dest1, src1);
	printf("original dest is %s\n", dest2);
	num2 = ft_strlcat(dest2, src2, 1);
	printf("return value for strlcat %zu\n", num2);
	printf("dest berria %s da, src %s da", dest2, src2);
	return(0);
}
