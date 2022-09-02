/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:59:20 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/02 18:10:42 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (s[n] != c && s[n] != '\0')
		n++;
	if (s[n] == c)
		return ((char*)&s[n]);
	else
		return (NULL);
}

/*int	main(void)
{
	const char	s[] = "https://www.google.es";
	int	c = '.';
	printf("%s\n", s);
	printf("%s\n", ft_strchr(s, c));
	return (0);	
}*/
