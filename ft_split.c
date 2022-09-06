int	ft_wordcount(const char *s, c)
{
	size_t	n;
	int w;
	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] == c)
			w++;
		n++;
	}
	return (++w);
}
char	**ft_split(const char *s, char c)
{
	size_t	n;
	size_t	len;
	int	w;
	char 	**ptr;
	int	m = 0;

	m = 0;
	w = ft_wordcount(s, c);
	n = 0;
	ptr = malloc((w + 1) sizeof(char));
	while (m <= w)
	{
		len = 0;
		while (s[n++] != c)
			len++;
		*ptr[m] = malloc ((len + 1) * sizeof(char);
		if (!*ptr[m])
			return(NULL);
		m++;
	}
	ptr[m] = NULL;
	ptr = ft_strcpy
}
