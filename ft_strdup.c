#include "libft.h"
#include <stdlib.h>
char	*strdup(const char *s)
{
	size_t	n;
	char	*ptr;

	n = ft_strlen(s);
	if (!(ptr = malloc(n * sizeof(*s))))
		return (NULL);
	n = 0;
	while (s[n] != '\0')
		ptr[n] = s[n++];
	return (ptr);
}
