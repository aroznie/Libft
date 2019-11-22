/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 12:57:40 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/21 04:06:29 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	i = ft_strlen(s1);
	if (!(s2 = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while ((i + 1) > 0)
	{
		s2[i] = s1[i];
		i--;
	}
	return (s2);
}
