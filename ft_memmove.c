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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*swap;
	int		n;

	n = 0;
	swap = malloc (sizeof *src * len);
	while (src[n] != '\0')
	{
		swap[n] = src[n];
		n++;
	}
	swap [n] = '\0';
	n = 0;
	while (swap[n] != '\0')
	{
		dst[n] = swap[n];
		n++;
	}
	dst[n] = '\0';
	free(swap);
	return (dst);
}
