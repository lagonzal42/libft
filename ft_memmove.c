/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:53:52 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/05 12:03:48 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include<string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			m;
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			n;

	m = 0;
	n = 0;
	dest = dst;
	sorc = (void *)src;
	if (*dest > *sorc)
	{	
		m = ft_strlen(src);
		while (len - m > 0 )
		{
			dest[m] = sorc[m];
			n++;
			m--;
		}
	}
	else
	{
		while (sorc[m] != '\0' && len > m)
		{
			dest[m] = sorc[m];
			m++;
		}
	}
	return (dst);
}
