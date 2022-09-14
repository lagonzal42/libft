/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:41:50 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/14 19:56:38 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	size_t	m;

	if (s && f)
	{	
		m = 0;
		while (s[m] != '\0')
		{
			(*f)(m, s + m);
			m++;
		}
	}
}	

/*{
	char	*ptr;
	size_t	m;
	size_t	n;

	n = ft_strlen(s);
	ptr = malloc((n + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	m = 0;
	while (s[m] != '\0')
	{
		ptr[m] = s[m];
		m++;
	}
	ptr[m] = '\0';
	m = 0;
	while (ptr[m] != '\0')
	{
		ptr[m] = (*f)(m, ptr[m]);
		m++;
	}
	return (ptr);
}*/
