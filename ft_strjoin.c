/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 15:12:21 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 15:38:37 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*s3;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
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
