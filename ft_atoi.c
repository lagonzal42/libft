#include<stdlib.h>
#include<stdio.h>

int	ft_atoi(const char *nptr)
{
	int num;
	int n;
	int sign;

	num = 0;
	sign = 1;
	n = 0;
	if (nptr[n] == '+')
		n++;
	if (nptr[n] == '-')
	{
		sign = -1;
		n++;
	}
	while (nptr[n] >= '0' && nptr[n] <= '9')
	{
		num = (num * 10) + (nptr[n] - '0');
		n++;
	}
	return (num * sign);
}

/*int	main(void)
{
	char	nptr[] = "--123456";

	printf("%d\n", atoi(nptr));
	printf("%d\n", ft_atoi(nptr));
	return (0);
}*/
