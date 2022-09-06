#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	n;
	size_t	m;

	m = 0;
	n = 0;
	ptr = malloc (len * sizeof(char));
	if(!ptr)
		return(NULL);
	while (n < start + len -1 && s[n] != '\0')
	{
		if (n >= start)
			ptr[m++] = s[n];
		n++;
	}
	ptr[n] = '\0';
	return(ptr);
}

int	main(void)
{
	const char d[] = "Esto es una prueba";
	char *str;
	str = ft_substr(d, 5, 6);
	printf("%s\n", str);
	free(str);
	return (0);
}
