/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:31:05 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/02 17:13:13 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	m;

	m = 0;
	while (m < n && s[m] != '\0' && s[m] != (unsigned char)c)
		m++;
	if (s[m] == '\0')
		return (NULL);
	else
		return (&s[m]);
}
