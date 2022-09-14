#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc (len + 1 * sizeof(char));
	if (!substr)
		return (NULL);
	if (ft_strlen(s) >= start)
		ft_strlcpy(substr, &s[start], len + 1);
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

