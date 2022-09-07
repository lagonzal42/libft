/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:53:52 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/07 20:09:08 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include<string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	const char	*sorc;
	size_t			m;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	sorc = src;
	if (dst < src)
	{	
		m = 0;
		while (len )
		{
			dest[m] = sorc[m];
			len--;
			m++;
		}
	}
	else
	{
		m = len - 1;
		while (len )
		{
			dest[m] = sorc[m];
			len--;
			m--;
		}
		//dest[m] = sorc[m];
	}
	return (dst);
}
