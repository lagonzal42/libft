#include "libft.h"
#include "stdlib.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc (nmemb * size);
	return (ptr);
}
