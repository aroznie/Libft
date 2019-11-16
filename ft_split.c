/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:14:02 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 16:04:23 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloctab(char const *s, char c)
{
	int		i;
	int		line;
	char	**str;

	i = 0;
	line = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			line++;
		while (s[i] != c && s[i])
			i++;
	}
	if (!(str = malloc(sizeof(char *) * (line + 1))))
		return (NULL);
	return (str);
}

static char	*ft_fillstr(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*str;

	j = 0;
	while (s[i] && s[i] != c)
	{
		j++;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	k = j;
	while (j > 0)
	{
		str[k - j] = s[i - j];
		j--;
	}
	str[k] = '\0';
	return (str);
}

static char	**ft_free_error(char **str, int line)
{
	while (line > 0)
	{
		free(str[line - 1]);
		line--;
	}
	free(str);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		line;
	char	**str;

	if (s == NULL)
		return (0);
	str = ft_malloctab(s, c);
	i = 0;
	line = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			line++;
			if (!(str[line - 1] = ft_fillstr(s, c, i)))
				return (ft_free_error(str, line - 1));
		}
		while (s[i] != c && s[i])
			i++;
	}
	str[line] = NULL;
	return (str);
}
