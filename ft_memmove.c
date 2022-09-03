/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:53:52 by lagonzal          #+#    #+#             */
/*   Updated: 2022/08/30 18:18:41 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include<string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	n;
	size_t	m;

	m = 0;

	if (*dst > *src)
	{
		n = ft_strlen((const char *) dst)
		while (src[m] != '\0' && len - 1 > m)
		{
			dst[n] = src[m];
			n--;
			m--;
		}
	}
	else
	{
		while (src[m] != '\0' && len - 1 > m)
		       dst[m]	
	}
}
