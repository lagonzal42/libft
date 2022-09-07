/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:26:52 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/07 18:49:01 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

static int	ft_wordcount(const char *s, char c)
{
	size_t	n;
	int w;
	
	w = 0;
	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] == c)
			w++;
		n++;
	}
	return (++w);
}

char	**ft_allocation(int w, char **ptr, const char *s, char c)
{
	size_t	n;
	size_t	len;
	int		m;

	n = 0;
	m = 0;
	ptr = malloc ((w + 1) * sizeof (char));
	if (!ptr)
		return (NULL);
	while (m <= w)
	{
		len = 0;
		while (s[n++] != c)
			len++;
		ptr[m] = malloc ((len + 1) * sizeof (char));
		if (!*ptr[m])
			return (NULL);
		m++;
	}
	ptr[m] = NULL;
	return (ptr);
}
char	**ft_split(const char *s, char c)
{
	size_t	n;
	int		i;
	int		w;
	char	**ptr;
	int		m;	
	
	m = 0;	
	ptr = 0;	
	n = 0;
	w = ft_wordcount(s, c);
	ptr = ft_allocation(w, ptr, s, c);
	while (s[n] != '\0')
	{
		i = 0;
		while (s[n] != c)
		{
			ptr[m][i] = s[n++];
			i++;
		}
		if (s[n] == c)
			n++;
		m++;
	}
	return (ptr);
}

int main(void)
{
	const char	s[] = "Esto es";
	char		c = ' ';
	char		**ptr;
	int			m;
	m = 0;
printf("a");
	ptr = ft_split(s, c);
	printf("1.- %s\n", ptr[0]);
	printf("2.- %s\n", ptr[1]);
	printf("3.- %s\n", ptr[2]);
	printf("4.- %s\n", ptr[3]);
	printf("5.- %s\n", ptr[4]);
	printf("6.- %s\n", ptr[5]);
	printf("null %s\n", ptr[6]);
	while (m <= 7)
	{
		free(ptr[m++]);
	}
	free(ptr);
	return (0);
}
