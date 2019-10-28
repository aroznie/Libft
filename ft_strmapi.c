/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:08:13 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 14:26:20 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	while (s[i])
		i++;
	if (!(s2 = malloc(sizeof(char) * (i + 1))))
		return (0);
	s2[i] = '\0';
	while (i > 0)
	{
		s2[i - 1] = f((i - 1), s[i - 1]);
		i--;
	}
	return (s2);
}
