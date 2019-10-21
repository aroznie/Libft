
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
}
