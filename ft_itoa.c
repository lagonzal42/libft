/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:17:00 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/08 21:17:11 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_numlen(int n)
{
	size_t	i;
	
	i = 1;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*ft_nb2str(char *s,int n, int sign, size_t i)
{
	while (i > 0)
	{
		if (nbr > 10)
			ft
		
		i--;
	}

}
char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;
	int		sign;

	sign = 1;
	if (n < 0)
	{		
		n = n * -1;
		sign = -1;
	}
	i = ft_numlen(n);
	if (sign < 0)
		i++;
	s = malloc ((i + 1) * sizeof(char));
	s = ft_nb2str(s ,n, sign, i);
	
}
