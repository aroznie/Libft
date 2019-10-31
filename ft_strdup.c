/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 12:57:40 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 17:30:57 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	i++;
	if (!(s2 = malloc(sizeof(char) * i)))
		return (0);
	while (i > 0)
	{
		s2[i - 1] = s1[i - 1];
		i--;
	}
	return (s2);
}
