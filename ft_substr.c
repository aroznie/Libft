/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 06:03:43 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/16 15:42:59 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;

	if (s == NULL)
		return (0);
	i = 0;
	if (ft_strlen(s) <= start)
		len = 0;
	if (!(s1 = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while ((i < len) && s[start + i])
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
