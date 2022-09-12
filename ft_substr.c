#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
/*	char	*ptr;
	size_t	n;
	size_t	m;

	m = 0;
	n = 0;
	if (len == 0)
		return (NULL);
	ptr = malloc (len + 1 * sizeof(char));
	if(!ptr)
		return(NULL);
	while (n < start + len && s[n] != '\0')
	{
		if (n >= start)
			ptr[m++] = s[n];
		n++;
	}
	ptr[n] = '\0';
	return(ptr);
*/
	char	*substr;


	substr = malloc (len + 1 * sizeof(char));
	if (!substr)
		return (NULL);
	if (ft_strlen(s) >= start)
	{
		ft_strlcpy(substr, &s[start], len +1);
		
	}
	else
		substr[0] = '\0';
	return (substr);
}


/*int	main(void)
{
	const char d[] = "Esto es una prueba";
	char *str;
	str = ft_substr(d, 5, 6);
	printf("%s\n", str);
	free(str);
	return (0);
}*/

