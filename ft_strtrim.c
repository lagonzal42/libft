/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:00:16 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/07 13:16:58 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

/*char	*ft_strstr(char *s1, const char *set)
{
:wq	size_t	n;
	size_t	m;

	n = 0;
	while (str[n] != '\0' && set[m] != '\0')
	{
		m = 0;
		n++;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	n;
	size_t	len;
	char	*ptr;

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
}*/

/*int	main(void)
{
	char	s1[] = "AAAACCAABBAAAEE";
	char	set[] ="CBE";
	char	*s2;
	printf("teniendo el string %s queremos borrar los caracteres %s\n", s1, set);
	s2 = ft_strtrim(s1, set);
	printf("despues del borrado queda asi%s\n", s2);
	free(s2);
	return(0);
}*/
