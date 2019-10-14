/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:39:56 by arroznie     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 21:01:14 by arroznie    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;
	size_t		i;

	i = 0;
	dst2 = dst;
	src2 = src;
	while (n > i)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst2);
}
