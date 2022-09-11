#include "libft.h"
#include <stdlib.h>

void	ft_putnbr(int n, int fd)
{
	char	c;

	c = 0;
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, fd);
		c =(n % 10) + '0';
		write(fd, &c, 1);
	}
	else
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}
