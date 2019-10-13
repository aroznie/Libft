/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 15:11:37 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 17:16:22 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

int		ft_strrchr(const char *s, int c)
{
	int		i;
	char	*found;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			found = ((char *)(&s[i]));
		}
		i++;
	}
	if (found == 0)
		return (0);
	return ((int)found);
}
