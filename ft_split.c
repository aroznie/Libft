
static char	**tab_crea(const char *s, char c)
{
	int	count;
	int	i;
	char	**str

	i = 0;
	count = 1;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	if (!(str = malloc(sizeof(char *) * count)))
		return (0);
	return (str);
}

static char	*ft_fillstr(const char *s, char c, int i)
{
	int	j;
	int	k;
	char	*str;

	j = 0;
	while (s[i] && s[i] != c)
	{
		j++;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (0)
	k = j;
	while (j > 0)
	{
		str[k - j] = s[i - j];
		j--;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_free(char **str, int count)
{
	while (count > 0)
	{
		free(str[count - 1]);
		count--;
	}
	free(str[count - 1]);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	count;
	char	**str;

	i = 0;
	count = 0;
	str = tab_crea(s, c);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			if (!(str[count - 1] = ft_fillstr(s, c, i)))
				return (ft_free(str, count - 1));
		}
		while (s[i] != c && s[i])
			i++;
	}
	str[count] = 0;
	return (str);
=======

int nb_string(const char *str, char c)
{
  int size = 1;
  
  for (int i = 0; str[i] != 0; i++) {
    if (str[i] == c) {
      while (str[i] == c)
        i++;
      size += 1
    }
  }
  return (size);
}

int next_deli(const char *str, char c, int pos)
{
  while (str[pos] != c || str[pos] != 0)
    pos++;
  return (pos);
}

char **ft_split(char const *str, char c);
{
  char **tab;
  int size_tab = nb_string(str, c);
  int next;
  int actual = 0;
  
  tab = malloc(sizeof(char *) * (size_tab + 1));
  tab[size_tab] = NULL;
  for (int i = 0; i < size_tab; i++) {
    next = next_deli(str, c, actual);
    tab[i] = malloc(sizeof(char) * (next - i + 1));
    for (int y = 0; actual < next; y++) {
      tab[i][y] = str[actual];
    }
    tab[next - i] = 0;
    while (str[i] == c)
      actual++;
  }
  return (tab);
>>>>>>> 6011fb887e6269d5adb6aeda2f8bd90ed268661e
}
