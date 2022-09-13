#include "libft.h"
#include <unistd.h>
void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while(s[n])
	{
		ft_putchar_fd(s[n], fd); 
		n++;
	}
}
