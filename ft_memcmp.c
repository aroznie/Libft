/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:41:26 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 17:13:05 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*tmp1;
	unsigned const char	*tmp2;

	i = 0;
	tmp1 = s1;
	tmp2 = s2;
	if (n == 0)
		return (0);
	while (tmp1[i] == tmp2[i] && (i < (n - 1)))
		i++;
	return (tmp1[i] - tmp2[i]);
}
