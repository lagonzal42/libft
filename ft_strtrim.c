#include<stdio.h>
#include<stdlib.h>
#include"libft.h"
int	ft_chrinstr(char s1, const char *set)
{
	size_t	i;
	int	coin;

	coin = 0;
	i = 0;
	while (i < ft_strlen(set) && coin == 0)
	{
		if (set[i] == s1)
			coin = 1;
		i++;
	}
	if (coin == 1)
		return (0);
	else 
		return (1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	n;
	size_t	len;
	char	*ptr;

	n = 0;
	while (s1[n] != '\0')
	{
		if (ft_chrinstr(s1[n], set) == 1)
			len++;
		n++;		
	}
	ptr = malloc ((len + 1) * sizeof(char));
	len = 0;
	n = 0;
	while (s1[n] != '\0')
	{
		if (ft_chrinstr(s1[n], set) == 1)
			ptr[len++] = s1[n];
		n++;
	}
	ptr[len] = '\0';
	return(ptr);
}

int	main(void)
{
	char	s1[] = "AAAACCAABBAAAEE";
	char	set[] ="CBE";
	char	*s2;
	printf("teniendo el string %s queremos borrar los caracteres %s\n", s1, set);
	s2 = ft_strtrim(s1, set);
	printf("despues del borrado queda asi%s\n", s2);
	free(s2);
	return(0);
}
