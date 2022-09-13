/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:26:52 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/13 18:26:57 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

static int    ft_wordcount(const char *s, char c)
{
    size_t    n;
    int w;

    w = 0;
    n = 0;
    while (s[n] == c && s[n] != '\0')
		n++;
	while (s[n] != '\0')
    {
    	if (s[n] != c && n == 0)
			w++;
		else if (s[n] != 0 && s[n - 1] == c && s[n] != c)
			w++;
		n++;		   	
    }
	return(w);
}

char    **ft_allocation(int w, char **ptr, const char *s, char c)
{
    size_t	n;
    size_t	len;
    int		m;

    n = 0;
    m = 0;
	ptr = malloc ((w + 1) * sizeof *ptr);
    if (!ptr)
        return (NULL);
    while (m < w && w > 1)
    {
        len = 0;
        while (s[n] != c && s[n++] != '\0')
            len++;
        len++;
		ptr[m] = malloc ((len + 1) * sizeof *ptr[m]);
        if (!*ptr)
            return (NULL);
        while (s[n] != '\0' && s[n] == c)
            n++;
		m++;
    }
    //ptr[m] = malloc (1 * sizeof *ptr[m]);
//	if(!ptr)
//		return (NULL);
	ptr[m] = NULL;
    return (ptr);
}

char    **ft_split(const char *s, char c)
{
    size_t	n;
    int		i;
    int		w;
    char	**ptr;
    int		m;

    m = 0;
    ptr = 0;
    n = 0;
    w = ft_wordcount(s, c);
ptr = ft_allocation(w, ptr, s, c);
    while (s[n] != '\0')
    {
        i = 0;
        while (s[n] == c)
            n++;
		while (s[n] != c && s[n] != '\0')
        {
            ptr[m][i] = s[n++];
            i++;
        }
        ptr[m][i] = '\0';
        m++;
    }
    return (ptr);
}

/*int main(void)
{
    char    s[] = "lorem    ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
    char        c = ' ';
    char        **ptr;
    int            m;
    m = 0;
    ptr = ft_split(s, c);
    printf("1.- %s\n", ptr[0]);
    printf("2.- %s\n", ptr[1]);
    printf("3.- %s\n", ptr[2]);
    printf("4.- %s\n", ptr[3]);
    printf("5.- %s\n", ptr[4]);
    printf("6.- %s\n", ptr[5]);
    printf("7.- %s\n", ptr[6]);
    printf("8.- %s\n", ptr[7]);
    printf("9.- %s\n", ptr[8]);
    printf("10.- %s\n", ptr[9]);
    printf("11.- %s\n", ptr[10]);
    printf("12.- %s\n", ptr[11]);
    while (m <= 11)
    {
        free(ptr[m++]);
    }
    free(ptr);
    return (0);
}*/
