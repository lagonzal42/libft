#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	m;
	size_t	n;

	n = ft_strlen(s);
	ptr = malloc((n + 1) * sizeof(char));
	if (!ptr)
		return(NULL);
	m = 0;
	while (s[m] != '\0')
	{
		ptr[m] = s[m]
		m++;
	}
	ptr[m] = '\0';
	m = 0;
	while (str[m] != '\0')
	{
		str[m] = (*f)(m, str[m]);
		m++;
	}
	return(ptr);
}
