/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 15:12:21 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 16:00:56 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*s3;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	if (!(s3 = malloc(sizeof(char) * (i + j + 1))))
		return (0);
	while (k < (i + j))
	{
		if (k < i)
			s3[k] = s1[k];
		else
			s3[k] = s2[k - i];
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
