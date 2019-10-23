char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int;
	char *s2;

	i = 0;
	while (s[i])
		i++;
	if (!(s2 = malloc(sizeof(char) * i)))
		return (0);
	s2[i] = '\0';
	while (i > 0)
	{
		s2[i] = f(i, s[i]);
		i--;
	}
	return (s2);
}
