/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:48:02 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/14 18:42:46 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	n;
	char	*ptr;
	size_t	i;

	n = ft_strlen(s);
	ptr = malloc(n + 1 * sizeof(*s));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{	
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	const char	s[] = "lorem ipsum dolor si amet";
	const char	*t;
	t = ft_strdup(s);
	printf("%s", t);
	return (0);
}*/
