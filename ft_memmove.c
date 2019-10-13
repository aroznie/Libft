/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   memmove.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:18:43 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 14:27:36 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst2;
	const char	*src2;
	char		*tmp;

	i = 0;
	tmp = dst;
	dst2 = dst;
	src2 = src;
	while (src2[i] && i < len)
	{
		tmp[i] = src2[i];
		dst2[i] = tmp[i];
		i++;
	}
	return (&dst2);
}
