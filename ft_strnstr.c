/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:43:23 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/14 19:21:22 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle,  size_t len)
{
	size_t	n;
	size_t	m;

	n = 0;
	m = 0;
	if (!needle[m])
		return (&((char *)haystack)[n]);
	if (len <= 0)
		return (NULL);
	while (haystack[n] && needle[m] && n < len - 1)
	{
		if (haystack[n] == needle[m] && len - n + 1 > ft_strlen(needle))
		{
			if (ft_strncmp(&haystack[n], &needle[m], ft_strlen(needle)) == 0)
				return (&((char *)haystack)[n]);
		}
	n++;
	}
	return (NULL);
}
