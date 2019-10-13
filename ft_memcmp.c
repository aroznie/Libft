/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   memcmp.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:41:26 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 13:29:38 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = s1;
	tmp2 = s2;
	while (tmp1[i] == tmp2[i] && tmp1[i] && tmp2[i])
	{
		i++;
	}
	return (tmp1[i] - tmp2[i]);
}
